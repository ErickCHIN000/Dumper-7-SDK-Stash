#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCharacter.BaseCharacter_C
// (Actor, Pawn)

class UClass* ABaseCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCharacter_C");

	return Clss;
}


// BaseCharacter_C BaseCharacter.Default__BaseCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseCharacter_C* ABaseCharacter_C::GetDefaultObj()
{
	static class ABaseCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseCharacter_C*>(ABaseCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseCharacter.BaseCharacter_C.GetBleedEmitter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UParticleSystem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UParticleSystem* ABaseCharacter_C::GetBleedEmitter(class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetBleedEmitter");

	Params::ABaseCharacter_C_GetBleedEmitter_Params Parms{};

	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.HandleGetKickedCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABaseCharacter_C::HandleGetKickedCooldown(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "HandleGetKickedCooldown");

	Params::ABaseCharacter_C_HandleGetKickedCooldown_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.HandleHardParryCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABaseCharacter_C::HandleHardParryCooldown(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "HandleHardParryCooldown");

	Params::ABaseCharacter_C_HandleHardParryCooldown_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.Handle Knockdown Resistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Ragdoll_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            Local_Char                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_String                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// float                              Local_Random                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::Handle_Knockdown_Resistance(const class FString& String, class ABaseCharacter_C* Char, bool* Ragdoll_, class ABaseCharacter_C* Local_Char, const class FString& Local_String, float Local_Random, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Handle Knockdown Resistance");

	Params::ABaseCharacter_C_Handle_Knockdown_Resistance_Params Parms{};

	Parms.String = String;
	Parms.Char = Char;
	Parms.Local_Char = Local_Char;
	Parms.Local_String = Local_String;
	Parms.Local_Random = Local_Random;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ragdoll_ != nullptr)
		*Ragdoll_ = Parms.Ragdoll_;

}


// Function BaseCharacter.BaseCharacter_C.ClearBodyBleedFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ClearBodyBleedFX(class UParticleSystem* NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ClearBodyBleedFX");

	Params::ABaseCharacter_C_ClearBodyBleedFX_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SpawnBodyBleedFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetBleedEmitter_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SpawnBodyBleedFX(class UParticleSystem* NewLocalVar_0, class UParticleSystem* CallFunc_GetBleedEmitter_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsActive_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SpawnBodyBleedFX");

	Params::ABaseCharacter_C_SpawnBodyBleedFX_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetBleedEmitter_ReturnValue = CallFunc_GetBleedEmitter_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.Kick_ReducePoiseHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_KickRune_3_PoiseReduction                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::Kick_ReducePoiseHealth(TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_KickRune_3_PoiseReduction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Kick_ReducePoiseHealth");

	Params::ABaseCharacter_C_Kick_ReducePoiseHealth_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_KickRune_3_PoiseReduction = CallFunc_KickRune_3_PoiseReduction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.Kick_DealDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Local_KickDamage                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Health                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_KickRune_2_Damage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EnemyCommon_GetHealth_Health                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EnemyCommon_GetHealth_MaxHealth                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::Kick_DealDamage(float Local_KickDamage, float Local_Health, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_KickRune_2_Damage, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_EnemyCommon_GetHealth_Health, float CallFunc_EnemyCommon_GetHealth_MaxHealth, float CallFunc_FClamp_ReturnValue, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Kick_DealDamage");

	Params::ABaseCharacter_C_Kick_DealDamage_Params Parms{};

	Parms.Local_KickDamage = Local_KickDamage;
	Parms.Local_Health = Local_Health;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_KickRune_2_Damage = CallFunc_KickRune_2_Damage;
	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface = K2Node_DynamicCast_AsEnemy_Common_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_EnemyCommon_GetHealth_Health = CallFunc_EnemyCommon_GetHealth_Health;
	Parms.CallFunc_EnemyCommon_GetHealth_MaxHealth = CallFunc_EnemyCommon_GetHealth_MaxHealth;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DualSense_Landing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DualSense_Landing(const struct FVector& Location, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DualSense_Landing");

	Params::ABaseCharacter_C_DualSense_Landing_Params Parms{};

	Parms.Location = Location;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.BreakStoneFormOnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::BreakStoneFormOnHit(bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "BreakStoneFormOnHit");

	Params::ABaseCharacter_C_BreakStoneFormOnHit_Params Parms{};

	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.Freezing_ResetMontagePlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::Freezing_ResetMontagePlayRate(class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Freezing_ResetMontagePlayRate");

	Params::ABaseCharacter_C_Freezing_ResetMontagePlayRate_Params Parms{};

	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DebugFreezingEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void ABaseCharacter_C::DebugFreezingEnd(float CallFunc_GetGameTimeInSeconds_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DebugFreezingEnd");

	Params::ABaseCharacter_C_DebugFreezingEnd_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DebugFreezingStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Play_Rate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)

void ABaseCharacter_C::DebugFreezingStart(float Play_Rate, float Duration, float CallFunc_GetGameTimeInSeconds_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DebugFreezingStart");

	Params::ABaseCharacter_C_DebugFreezingStart_Params Parms{};

	Parms.Play_Rate = Play_Rate;
	Parms.Duration = Duration;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.AddDebugLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DebugLine                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::AddDebugLine(const class FString& DebugLine, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AddDebugLine");

	Params::ABaseCharacter_C_AddDebugLine_Params Parms{};

	Parms.DebugLine = DebugLine;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ResetFallPreZ
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ResetFallPreZ(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetFallPreZ");

	Params::ABaseCharacter_C_ResetFallPreZ_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DebugFallDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void ABaseCharacter_C::DebugFallDamage(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DebugFallDamage");

	Params::ABaseCharacter_C_DebugFallDamage_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ApplyFallDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABaseCharacter_C::ApplyFallDamage(class AController* CallFunc_GetController_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ApplyFallDamage");

	Params::ABaseCharacter_C_ApplyFallDamage_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.ShouldApplyFallDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABaseCharacter_C::ShouldApplyFallDamage(const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ShouldApplyFallDamage");

	Params::ABaseCharacter_C_ShouldApplyFallDamage_Params Parms{};

	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.DeflectParry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::DeflectParry(class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DeflectParry");

	Params::ABaseCharacter_C_DeflectParry_Params Parms{};

	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetClothMaterialIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::SetClothMaterialIDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetClothMaterialIDs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.GetBloodDirectionForCurrentStrike
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Dir                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSet                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::GetBloodDirectionForCurrentStrike(struct FVector* Dir, bool* bSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetBloodDirectionForCurrentStrike");

	Params::ABaseCharacter_C_GetBloodDirectionForCurrentStrike_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dir != nullptr)
		*Dir = std::move(Parms.Dir);

	if (bSet != nullptr)
		*bSet = Parms.bSet;

}


// Function BaseCharacter.BaseCharacter_C.GetBloodSpawnScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABaseCharacter_C::GetBloodSpawnScale(class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetBloodSpawnScale");

	Params::ABaseCharacter_C_GetBloodSpawnScale_Params Parms{};

	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.MeshSphereTrace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EObjectTypeQuery        ObjectToTrace                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactPoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         DrawDebugType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingleForObjects_OutHit                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingleForObjects_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABaseCharacter_C::MeshSphereTrace(enum class EObjectTypeQuery ObjectToTrace, const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, enum class EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_NegateVector_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MeshSphereTrace");

	Params::ABaseCharacter_C_MeshSphereTrace_Params Parms{};

	Parms.ObjectToTrace = ObjectToTrace;
	Parms.ImpactPoint = ImpactPoint;
	Parms.ImpactNormal = ImpactNormal;
	Parms.DrawDebugType = DrawDebugType;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceSingleForObjects_OutHit = CallFunc_SphereTraceSingleForObjects_OutHit;
	Parms.CallFunc_SphereTraceSingleForObjects_ReturnValue = CallFunc_SphereTraceSingleForObjects_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.GetHeadBoneLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABaseCharacter_C::GetHeadBoneLocation(class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetHeadBoneLocation");

	Params::ABaseCharacter_C_GetHeadBoneLocation_Params Parms{};

	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.PlayRollImpactAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume_Multiplier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch_Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impact_Location                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::PlayRollImpactAudio(float Volume_Multiplier, float Pitch_Multiplier, const struct FVector& Impact_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_SelectVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayRollImpactAudio");

	Params::ABaseCharacter_C_PlayRollImpactAudio_Params Parms{};

	Parms.Volume_Multiplier = Volume_Multiplier;
	Parms.Pitch_Multiplier = Pitch_Multiplier;
	Parms.Impact_Location = Impact_Location;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CheckPhysicsHitReaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        bone                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::CheckPhysicsHitReaction(class FName bone, const struct FVector& ImpactNormal, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CheckPhysicsHitReaction");

	Params::ABaseCharacter_C_CheckPhysicsHitReaction_Params Parms{};

	Parms.bone = bone;
	Parms.ImpactNormal = ImpactNormal;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.PlayBodyfallAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SoundLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EClothingType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::PlayBodyfallAudio(const struct FVector& SoundLocation, bool* Return, enum class EClothingType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayBodyfallAudio");

	Params::ABaseCharacter_C_PlayBodyfallAudio_Params Parms{};

	Parms.SoundLocation = SoundLocation;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BaseCharacter.BaseCharacter_C.Look to Dir if Not Zero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::Look_to_Dir_if_Not_Zero(const struct FVector& Dir, bool CallFunc_Vector_IsNearlyZero_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Look to Dir if Not Zero");

	Params::ABaseCharacter_C_Look_to_Dir_if_Not_Zero_Params Parms{};

	Parms.Dir = Dir;
	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GetResolveMultiplierOnBeingHit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Multiplier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetResolveMultiplierOnBeingHit(float* Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetResolveMultiplierOnBeingHit");

	Params::ABaseCharacter_C_GetResolveMultiplierOnBeingHit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

}


// Function BaseCharacter.BaseCharacter_C.PlayerHandleFreeze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Freeze_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::PlayerHandleFreeze(bool Freeze_, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayerHandleFreeze");

	Params::ABaseCharacter_C_PlayerHandleFreeze_Params Parms{};

	Parms.Freeze_ = Freeze_;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.AI_HandleUnFreeze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::AI_HandleUnFreeze(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, bool CallFunc_BooleanOR_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AI_HandleUnFreeze");

	Params::ABaseCharacter_C_AI_HandleUnFreeze_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.AI_HandleFreeze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::AI_HandleFreeze(class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AI_HandleFreeze");

	Params::ABaseCharacter_C_AI_HandleFreeze_Params Parms{};

	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SaveRagdollPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterRagdollInterface_C>K2Node_DynamicCast_AsCharacter_Ragdoll_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::SaveRagdollPose(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class ICharacterRagdollInterface_C> K2Node_DynamicCast_AsCharacter_Ragdoll_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SaveRagdollPose");

	Params::ABaseCharacter_C_SaveRagdollPose_Params Parms{};

	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Ragdoll_Interface = K2Node_DynamicCast_AsCharacter_Ragdoll_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CapsuleRotWhileInRagdoll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABaseCharacter_C::CapsuleRotWhileInRagdoll(float DeltaTime, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_FInterpTo_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CapsuleRotWhileInRagdoll");

	Params::ABaseCharacter_C_CapsuleRotWhileInRagdoll_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ClearBodyFireEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ClearBodyFireEffect(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ClearBodyFireEffect");

	Params::ABaseCharacter_C_ClearBodyFireEffect_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DamageTypeCheckForApplyStandardDOT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::DamageTypeCheckForApplyStandardDOT(class UClass* DamageType, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DamageTypeCheckForApplyStandardDOT");

	Params::ABaseCharacter_C_DamageTypeCheckForApplyStandardDOT_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.PlayWeaponCrossRiposteImpactSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                ZeroBase                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            HitCharacter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::PlayWeaponCrossRiposteImpactSound(class AZero_Base_C* ZeroBase, class ABaseCharacter_C* HitCharacter, const struct FVector& Location, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, enum class EComboTypes Temp_byte_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayWeaponCrossRiposteImpactSound");

	Params::ABaseCharacter_C_PlayWeaponCrossRiposteImpactSound_Params Parms{};

	Parms.ZeroBase = ZeroBase;
	Parms.HitCharacter = HitCharacter;
	Parms.Location = Location;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DisableStopRMOnFallUntilStunEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHCharacterMovementComponent*K2Node_DynamicCast_AsDHCharacter_Movement_Component              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::DisableStopRMOnFallUntilStunEnd(class UDHCharacterMovementComponent* K2Node_DynamicCast_AsDHCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DisableStopRMOnFallUntilStunEnd");

	Params::ABaseCharacter_C_DisableStopRMOnFallUntilStunEnd_Params Parms{};

	Parms.K2Node_DynamicCast_AsDHCharacter_Movement_Component = K2Node_DynamicCast_AsDHCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetRMProtection for Cathedral Riposte
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsCathedralRiposte_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Enable_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHCharacterMovementComponent*K2Node_DynamicCast_AsDHCharacter_Movement_Component              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::SetRMProtection_for_Cathedral_Riposte(bool bIsCathedralRiposte_, bool Enable_, bool CallFunc_Not_PreBool_ReturnValue, class UDHCharacterMovementComponent* K2Node_DynamicCast_AsDHCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetRMProtection for Cathedral Riposte");

	Params::ABaseCharacter_C_SetRMProtection_for_Cathedral_Riposte_Params Parms{};

	Parms.bIsCathedralRiposte_ = bIsCathedralRiposte_;
	Parms.Enable_ = Enable_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHCharacter_Movement_Component = K2Node_DynamicCast_AsDHCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetRootMotionForRiposteReaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           RiposteType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DisableRootMotion_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::SetRootMotionForRiposteReaction(enum class ERiposteTypes RiposteType, bool DisableRootMotion_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetRootMotionForRiposteReaction");

	Params::ABaseCharacter_C_SetRootMotionForRiposteReaction_Params Parms{};

	Parms.RiposteType = RiposteType;
	Parms.DisableRootMotion_ = DisableRootMotion_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ClearBodyPoisonFXDelayed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ClearBodyPoisonFXDelayed(float Delay, class UParticleSystem* NewLocalVar_0, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ClearBodyPoisonFXDelayed");

	Params::ABaseCharacter_C_ClearBodyPoisonFXDelayed_Params Parms{};

	Parms.Delay = Delay;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ClearBodyPoisonFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ClearBodyPoisonFX(class UParticleSystem* NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ClearBodyPoisonFX");

	Params::ABaseCharacter_C_ClearBodyPoisonFX_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GetPoisonEmitter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UParticleSystem*             PoisonFxParticleSystem                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::GetPoisonEmitter(class UParticleSystem** PoisonFxParticleSystem, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetPoisonEmitter");

	Params::ABaseCharacter_C_GetPoisonEmitter_Params Parms{};

	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PoisonFxParticleSystem != nullptr)
		*PoisonFxParticleSystem = Parms.PoisonFxParticleSystem;

}


// Function BaseCharacter.BaseCharacter_C.SpawnBodyPoisonFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetPoisonEmitter_PoisonFxParticleSystem                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SpawnBodyPoisonFX(class UParticleSystem* NewLocalVar_0, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystem* CallFunc_GetPoisonEmitter_PoisonFxParticleSystem, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActive_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SpawnBodyPoisonFX");

	Params::ABaseCharacter_C_SpawnBodyPoisonFX_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetPoisonEmitter_PoisonFxParticleSystem = CallFunc_GetPoisonEmitter_PoisonFxParticleSystem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.UpdateAudioParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRUCT_EnemyAudioParams    NewAudioParams                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FSTRUCT_EnemyAudioParams    AudioParams                                                      (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSTRUCT_EnemyAudioParams    K2Node_MakeStruct_STRUCT_EnemyAudioParams                        (HasGetValueTypeHash)
// struct FSTRUCT_EnemyAudioParams    K2Node_MakeStruct_STRUCT_EnemyAudioParams_1                      (HasGetValueTypeHash)
// struct FSTRUCT_EnemyAudioParams    K2Node_MakeStruct_STRUCT_EnemyAudioParams_2                      (HasGetValueTypeHash)
// struct FSTRUCT_EnemyAudioParams    K2Node_MakeStruct_STRUCT_EnemyAudioParams_3                      (HasGetValueTypeHash)

void ABaseCharacter_C::UpdateAudioParams(const struct FSTRUCT_EnemyAudioParams& NewAudioParams, struct FSTRUCT_EnemyAudioParams* AudioParams, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSTRUCT_EnemyAudioParams& K2Node_MakeStruct_STRUCT_EnemyAudioParams, const struct FSTRUCT_EnemyAudioParams& K2Node_MakeStruct_STRUCT_EnemyAudioParams_1, const struct FSTRUCT_EnemyAudioParams& K2Node_MakeStruct_STRUCT_EnemyAudioParams_2, const struct FSTRUCT_EnemyAudioParams& K2Node_MakeStruct_STRUCT_EnemyAudioParams_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "UpdateAudioParams");

	Params::ABaseCharacter_C_UpdateAudioParams_Params Parms{};

	Parms.NewAudioParams = NewAudioParams;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_STRUCT_EnemyAudioParams = K2Node_MakeStruct_STRUCT_EnemyAudioParams;
	Parms.K2Node_MakeStruct_STRUCT_EnemyAudioParams_1 = K2Node_MakeStruct_STRUCT_EnemyAudioParams_1;
	Parms.K2Node_MakeStruct_STRUCT_EnemyAudioParams_2 = K2Node_MakeStruct_STRUCT_EnemyAudioParams_2;
	Parms.K2Node_MakeStruct_STRUCT_EnemyAudioParams_3 = K2Node_MakeStruct_STRUCT_EnemyAudioParams_3;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioParams != nullptr)
		*AudioParams = std::move(Parms.AudioParams);

}


// Function BaseCharacter.BaseCharacter_C.PlayWeaponImpactArmorType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            Hit_Actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EClothingType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::PlayWeaponImpactArmorType(class ABaseCharacter_C* Hit_Actor, class UAudioComponent* AudioComponent, enum class EClothingType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, class USoundBase* Temp_object_Variable, int32 K2Node_Select_Default, class USoundBase* Temp_object_Variable_1, int32 Temp_int_Variable_14, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayWeaponImpactArmorType");

	Params::ABaseCharacter_C_PlayWeaponImpactArmorType_Params Parms{};

	Parms.Hit_Actor = Hit_Actor;
	Parms.AudioComponent = AudioComponent;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.PlayWeaponImpactAudioFromGameplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponIdentity         WeaponIdentity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            HitCharacter                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAudioType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_19                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_20                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_21                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_22                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_23                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_24                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_25                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_26                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable_27                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_28                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::PlayWeaponImpactAudioFromGameplay(const struct FVector& ImpactLocation, class AActor* HitActor, enum class EWeaponIdentity WeaponIdentity, class ABaseCharacter_C* HitCharacter, bool Temp_bool_Variable, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, enum class EWeaponAudioType Temp_byte_Variable, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class USoundBase* Temp_object_Variable_15, class USoundBase* Temp_object_Variable_16, class USoundBase* Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, class USoundBase* Temp_object_Variable_19, class USoundBase* Temp_object_Variable_20, class USoundBase* Temp_object_Variable_21, enum class EComboTypes Temp_byte_Variable_1, class USoundBase* Temp_object_Variable_22, class USoundBase* Temp_object_Variable_23, class USoundBase* Temp_object_Variable_24, class USoundBase* Temp_object_Variable_25, class USoundBase* Temp_object_Variable_26, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class USoundBase* Temp_object_Variable_27, class USoundBase* Temp_object_Variable_28, bool Temp_bool_Variable_1, class USoundBase* K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, class USoundBase* K2Node_Select_Default_3, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayWeaponImpactAudioFromGameplay");

	Params::ABaseCharacter_C_PlayWeaponImpactAudioFromGameplay_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.HitActor = HitActor;
	Parms.WeaponIdentity = WeaponIdentity;
	Parms.HitCharacter = HitCharacter;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.Temp_object_Variable_20 = Temp_object_Variable_20;
	Parms.Temp_object_Variable_21 = Temp_object_Variable_21;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_22 = Temp_object_Variable_22;
	Parms.Temp_object_Variable_23 = Temp_object_Variable_23;
	Parms.Temp_object_Variable_24 = Temp_object_Variable_24;
	Parms.Temp_object_Variable_25 = Temp_object_Variable_25;
	Parms.Temp_object_Variable_26 = Temp_object_Variable_26;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_object_Variable_27 = Temp_object_Variable_27;
	Parms.Temp_object_Variable_28 = Temp_object_Variable_28;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue_1 = CallFunc_SpawnSoundAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ModifyHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ModifyHealth(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ModifyHealth");

	Params::ABaseCharacter_C_ModifyHealth_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.HasBuffFromClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      BuffClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHas                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::HasBuffFromClass(class UClass* BuffClass, bool* bHas, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBuffObject_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "HasBuffFromClass");

	Params::ABaseCharacter_C_HasBuffFromClass_Params Parms{};

	Parms.BuffClass = BuffClass;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHas != nullptr)
		*bHas = Parms.bHas;

}


// Function BaseCharacter.BaseCharacter_C.GetBuffFromClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      BuffClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               BuffObject                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::GetBuffFromClass(class UClass* BuffClass, class UBuffObject_C** BuffObject, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBuffObject_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetBuffFromClass");

	Params::ABaseCharacter_C_GetBuffFromClass_Params Parms{};

	Parms.BuffClass = BuffClass;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BuffObject != nullptr)
		*BuffObject = Parms.BuffObject;

}


// Function BaseCharacter.BaseCharacter_C.StopAllWhooshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_WhooshInfo          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::StopAllWhooshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSTRUCT_WhooshInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopAllWhooshes");

	Params::ABaseCharacter_C_StopAllWhooshes_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StopWeaponWhooshAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponIdentity         Weapon_Identity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutMS                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             AudioComponent                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RemovedItems                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_WhooshInfo          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::StopWeaponWhooshAudio(enum class EWeaponIdentity Weapon_Identity, float FadeOutMS, int32* Return, class UAudioComponent* AudioComponent, int32 RemovedItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FSTRUCT_WhooshInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopWeaponWhooshAudio");

	Params::ABaseCharacter_C_StopWeaponWhooshAudio_Params Parms{};

	Parms.Weapon_Identity = Weapon_Identity;
	Parms.FadeOutMS = FadeOutMS;
	Parms.AudioComponent = AudioComponent;
	Parms.RemovedItems = RemovedItems;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BaseCharacter.BaseCharacter_C.UnAssignParriableStateDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::UnAssignParriableStateDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "UnAssignParriableStateDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.AssignParriableStateDelegateToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void ABaseCharacter_C::AssignParriableStateDelegateToPlayer(class AZero_Base_C* Player, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AssignParriableStateDelegateToPlayer");

	Params::ABaseCharacter_C_AssignParriableStateDelegateToPlayer_Params Parms{};

	Parms.Player = Player;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetParriableState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::SetParriableState(bool NewState, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetParriableState");

	Params::ABaseCharacter_C_SetParriableState_Params Parms{};

	Parms.NewState = NewState;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GetBloodSpawnTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               SecondSocket                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetWeaponMesh_WeaponMesh                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_2                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_3                        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_4                        (IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_5                        (IsPlainOldData, NoDestructor)

struct FTransform ABaseCharacter_C::GetBloodSpawnTransform(bool* SecondSocket, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class UMeshComponent* CallFunc_GetWeaponMesh_WeaponMesh, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Vector_Distance_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, float CallFunc_Vector_Distance_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, float CallFunc_Vector_Distance_ReturnValue_3, class FName K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_4, class FName K2Node_Select_Default_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetBloodSpawnTransform");

	Params::ABaseCharacter_C_GetBloodSpawnTransform_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_GetWeaponMesh_WeaponMesh = CallFunc_GetWeaponMesh_WeaponMesh;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue_2 = CallFunc_GetSocketTransform_ReturnValue_2;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue_2 = CallFunc_Vector_Distance_ReturnValue_2;
	Parms.CallFunc_GetSocketTransform_ReturnValue_3 = CallFunc_GetSocketTransform_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_Vector_Distance_ReturnValue_3 = CallFunc_Vector_Distance_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue_4 = CallFunc_GetSocketTransform_ReturnValue_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue_5 = CallFunc_GetSocketTransform_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (SecondSocket != nullptr)
		*SecondSocket = Parms.SecondSocket;

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.DropWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::DropWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DropWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.GetStandardAudioComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAudioComponentLocation Audio_Component_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponIdentity         WeaponIdentity__only_for_weapons_                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepSocket         FootstepSocket__only_for_feet_                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Audio_Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetStandardAudioComponent(enum class EAudioComponentLocation Audio_Component_Location, enum class EWeaponIdentity WeaponIdentity__only_for_weapons_, enum class EFootstepSocket FootstepSocket__only_for_feet_, class UAudioComponent** Audio_Component, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetStandardAudioComponent");

	Params::ABaseCharacter_C_GetStandardAudioComponent_Params Parms{};

	Parms.Audio_Component_Location = Audio_Component_Location;
	Parms.WeaponIdentity__only_for_weapons_ = WeaponIdentity__only_for_weapons_;
	Parms.FootstepSocket__only_for_feet_ = FootstepSocket__only_for_feet_;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Audio_Component != nullptr)
		*Audio_Component = Parms.Audio_Component;

}


// Function BaseCharacter.BaseCharacter_C.PlayRustleAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERustleAudioLength      RustleLength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                Zero_Base                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CueToPlay                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Body_Audio_Component                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_GetStandardAudioComponent_Audio_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingDestroyed_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBeingDestroyed_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::PlayRustleAudio(enum class ERustleAudioLength RustleLength, float VolumeMultiplier, float PitchMultiplier, bool* Return, class AZero_Base_C* Zero_Base, class USoundCue* CueToPlay, class UAudioComponent* Body_Audio_Component, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, int32 CallFunc_Conv_ByteToInt_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UAudioComponent* CallFunc_GetStandardAudioComponent_Audio_Component, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class EArmorTypes Temp_byte_Variable, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsBeingDestroyed_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBeingDestroyed_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayRustleAudio");

	Params::ABaseCharacter_C_PlayRustleAudio_Params Parms{};

	Parms.RustleLength = RustleLength;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.Zero_Base = Zero_Base;
	Parms.CueToPlay = CueToPlay;
	Parms.Body_Audio_Component = Body_Audio_Component;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_GetStandardAudioComponent_Audio_Component = CallFunc_GetStandardAudioComponent_Audio_Component;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_IsBeingDestroyed_ReturnValue = CallFunc_IsBeingDestroyed_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsBeingDestroyed_ReturnValue_1 = CallFunc_IsBeingDestroyed_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BaseCharacter.BaseCharacter_C.PlayVocalizationAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVocalizationType       VocalizationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CueToPlay                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Mouth_Audio_Component                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_GetStandardAudioComponent_Audio_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ABaseCharacter_C::PlayVocalizationAudio(enum class EVocalizationType VocalizationType, float VolumeMultiplier, float PitchMultiplier, bool* Return, class USoundCue* CueToPlay, class UAudioComponent* Mouth_Audio_Component, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_GetStandardAudioComponent_Audio_Component, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayVocalizationAudio");

	Params::ABaseCharacter_C_PlayVocalizationAudio_Params Parms{};

	Parms.VocalizationType = VocalizationType;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.CueToPlay = CueToPlay;
	Parms.Mouth_Audio_Component = Mouth_Audio_Component;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStandardAudioComponent_Audio_Component = CallFunc_GetStandardAudioComponent_Audio_Component;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BaseCharacter.BaseCharacter_C.PlayWeaponImpactAudioFromAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponIdentity         Weapon_Identity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CueToPlay                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Weapon_Audio_Component                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_GetStandardAudioComponent_Audio_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EWeaponAudioType        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::PlayWeaponImpactAudioFromAnimation(enum class EWeaponIdentity Weapon_Identity, float VolumeMultiplier, float PitchMultiplier, bool* Return, class USoundCue* CueToPlay, class UAudioComponent* Weapon_Audio_Component, class UAudioComponent* CallFunc_GetStandardAudioComponent_Audio_Component, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, enum class EWeaponAudioType CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayWeaponImpactAudioFromAnimation");

	Params::ABaseCharacter_C_PlayWeaponImpactAudioFromAnimation_Params Parms{};

	Parms.Weapon_Identity = Weapon_Identity;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.CueToPlay = CueToPlay;
	Parms.Weapon_Audio_Component = Weapon_Audio_Component;
	Parms.CallFunc_GetStandardAudioComponent_Audio_Component = CallFunc_GetStandardAudioComponent_Audio_Component;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BaseCharacter.BaseCharacter_C.PlayWeaponWhooshAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponIdentity         Weapon_Identity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CueToPlay                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Weapon_Audio_Component                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_GetStandardAudioComponent_Audio_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSTRUCT_WhooshInfo          K2Node_MakeStruct_STRUCT_WhooshInfo                              (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAudioType        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::PlayWeaponWhooshAudio(enum class EWeaponIdentity Weapon_Identity, float VolumeMultiplier, float PitchMultiplier, bool* Return, class USoundCue* CueToPlay, class UAudioComponent* Weapon_Audio_Component, class UAudioComponent* CallFunc_GetStandardAudioComponent_Audio_Component, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSTRUCT_WhooshInfo& K2Node_MakeStruct_STRUCT_WhooshInfo, int32 CallFunc_Array_Add_ReturnValue, enum class EWeaponAudioType CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayWeaponWhooshAudio");

	Params::ABaseCharacter_C_PlayWeaponWhooshAudio_Params Parms{};

	Parms.Weapon_Identity = Weapon_Identity;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.CueToPlay = CueToPlay;
	Parms.Weapon_Audio_Component = Weapon_Audio_Component;
	Parms.CallFunc_GetStandardAudioComponent_Audio_Component = CallFunc_GetStandardAudioComponent_Audio_Component;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeStruct_STRUCT_WhooshInfo = K2Node_MakeStruct_STRUCT_WhooshInfo;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BaseCharacter.BaseCharacter_C.PlayFootstepAudio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFootstepSocket         FootstepSocket                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        ImpactSurface                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactPoint                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                Zero_Base                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  FSSoundToPlay                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Foot_Audio_Component                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepAudioType      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::PlayFootstepAudio(enum class EFootstepSocket FootstepSocket, float VolumeMultiplier, float PitchMultiplier, bool* Success, enum class EPhysicalSurface ImpactSurface, const struct FVector& ImpactPoint, class AZero_Base_C* Zero_Base, class USoundBase* FSSoundToPlay, class UAudioComponent* Foot_Audio_Component, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, bool CallFunc_IsValid_ReturnValue_1, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class AController* CallFunc_GetController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class USoundBase* Temp_object_Variable_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class USoundBase* Temp_object_Variable_16, enum class EFootstepAudioType Temp_byte_Variable_1, class USoundBase* Temp_object_Variable_17, class USoundBase* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_2, enum class EPhysicalSurface K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2, const struct FVector& CallFunc_SelectVector_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class USoundBase* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayFootstepAudio");

	Params::ABaseCharacter_C_PlayFootstepAudio_Params Parms{};

	Parms.FootstepSocket = FootstepSocket;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.ImpactSurface = ImpactSurface;
	Parms.ImpactPoint = ImpactPoint;
	Parms.Zero_Base = Zero_Base;
	Parms.FSSoundToPlay = FSSoundToPlay;
	Parms.Foot_Audio_Component = Foot_Audio_Component;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BaseCharacter.BaseCharacter_C.SpawnFootstepParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPhysicalSurface        SurfaceType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SpawnFootstepParticle(enum class EPhysicalSurface SurfaceType, const struct FVector& Location, const struct FRotator& Rotation, enum class EPhysicalSurface Temp_byte_Variable, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable_1, class UParticleSystem* Temp_object_Variable_2, class UParticleSystem* Temp_object_Variable_3, class UParticleSystem* Temp_object_Variable_4, class UParticleSystem* Temp_object_Variable_5, class UParticleSystem* Temp_object_Variable_6, class UParticleSystem* Temp_object_Variable_7, class UParticleSystem* Temp_object_Variable_8, class UParticleSystem* Temp_object_Variable_9, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SpawnFootstepParticle");

	Params::ABaseCharacter_C_SpawnFootstepParticle_Params Parms{};

	Parms.SurfaceType = SurfaceType;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CalcPoiseDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              PoiseIn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PoiseOut                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::CalcPoiseDamage(float PoiseIn, float* PoiseOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CalcPoiseDamage");

	Params::ABaseCharacter_C_CalcPoiseDamage_Params Parms{};

	Parms.PoiseIn = PoiseIn;

	UObject::ProcessEvent(Func, &Parms);

	if (PoiseOut != nullptr)
		*PoiseOut = Parms.PoiseOut;

}


// Function BaseCharacter.BaseCharacter_C.OnAttackSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnAttackSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnAttackSuccess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.EnableFrozenRiverLightRig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::EnableFrozenRiverLightRig(bool Enable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "EnableFrozenRiverLightRig");

	Params::ABaseCharacter_C_EnableFrozenRiverLightRig_Params Parms{};

	Parms.Enable_ = Enable_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GetBoostedDmgAgainstActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDmg                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BoostedDmg                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetBoostedDmgAgainstActor(class AActor* Actor, float BaseDmg, float* BoostedDmg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetBoostedDmgAgainstActor");

	Params::ABaseCharacter_C_GetBoostedDmgAgainstActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.BaseDmg = BaseDmg;

	UObject::ProcessEvent(Func, &Parms);

	if (BoostedDmg != nullptr)
		*BoostedDmg = Parms.BoostedDmg;

}


// Function BaseCharacter.BaseCharacter_C.GetIsLowHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLowHP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::GetIsLowHP(class AActor* Actor, bool* bLowHP, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetIsLowHP");

	Params::ABaseCharacter_C_GetIsLowHP_Params Parms{};

	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bLowHP != nullptr)
		*bLowHP = Parms.bLowHP;

}


// Function BaseCharacter.BaseCharacter_C.SetupPhysicsAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::SetupPhysicsAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetupPhysicsAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.FadeOutAnimSFXs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeOutDuration                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::FadeOutAnimSFXs(float FadeOutDuration, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "FadeOutAnimSFXs");

	Params::ABaseCharacter_C_FadeOutAnimSFXs_Params Parms{};

	Parms.FadeOutDuration = FadeOutDuration;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetFootstepAudioAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FootstepAudioAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SetFootstepAudioAlpha(float FootstepAudioAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetFootstepAudioAlpha");

	Params::ABaseCharacter_C_SetFootstepAudioAlpha_Params Parms{};

	Parms.FootstepAudioAlpha = FootstepAudioAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnPlayerResolveGained
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnPlayerResolveGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnPlayerResolveGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.GenericTraceFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::GenericTraceFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GenericTraceFunction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PlayDeathFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PlayDeathFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayDeathFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.FindDistanceAlongSplineClosestToWorldLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*            Spline                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::FindDistanceAlongSplineClosestToWorldLoc(const struct FVector& Location, class USplineComponent* Spline, float* Distance, float CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "FindDistanceAlongSplineClosestToWorldLoc");

	Params::ABaseCharacter_C_FindDistanceAlongSplineClosestToWorldLoc_Params Parms{};

	Parms.Location = Location;
	Parms.Spline = Spline;
	Parms.CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue = CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue = CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue;
	Parms.CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue_1 = CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function BaseCharacter.BaseCharacter_C.PlayClassSpecificImpactFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::PlayClassSpecificImpactFX(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayClassSpecificImpactFX");

	Params::ABaseCharacter_C_PlayClassSpecificImpactFX_Params Parms{};

	Parms.ImpactPoint = ImpactPoint;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.PlayMissedAttackFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PlayMissedAttackFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayMissedAttackFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.CheckForHardParry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

bool ABaseCharacter_C::CheckForHardParry(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CheckForHardParry");

	Params::ABaseCharacter_C_CheckForHardParry_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCharacter.BaseCharacter_C.GetupDebugTrace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LineColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZX_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_RotatorToText_ReturnValue                          (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetupDebugTrace(float A, const struct FLinearColor& LineColor, bool Temp_bool_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotFromZX_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class FText CallFunc_Conv_RotatorToText_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetupDebugTrace");

	Params::ABaseCharacter_C_GetupDebugTrace_Params Parms{};

	Parms.A = A;
	Parms.LineColor = LineColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeRotFromZX_ReturnValue = CallFunc_MakeRotFromZX_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Conv_RotatorToText_ReturnValue = CallFunc_Conv_RotatorToText_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GetCapsuleRagdollVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RagdollVelocity                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetCapsuleRagdollVelocity(float* Value, float RagdollVelocity, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetCapsuleRagdollVelocity");

	Params::ABaseCharacter_C_GetCapsuleRagdollVelocity_Params Parms{};

	Parms.RagdollVelocity = RagdollVelocity;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BaseCharacter.BaseCharacter_C.SetupGetupOrientation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_RotatorToString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZX_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::SetupGetupOrientation(bool Temp_bool_Variable, const class FString& CallFunc_Conv_RotatorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotFromZX_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetupGetupOrientation");

	Params::ABaseCharacter_C_SetupGetupOrientation_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_RotatorToString_ReturnValue = CallFunc_Conv_RotatorToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeRotFromZX_ReturnValue = CallFunc_MakeRotFromZX_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CalculateFacingDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsFacingUp_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::CalculateFacingDirection(bool* IsFacingUp_, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CalculateFacingDirection");

	Params::ABaseCharacter_C_CalculateFacingDirection_Params Parms{};

	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFacingUp_ != nullptr)
		*IsFacingUp_ = Parms.IsFacingUp_;

}


// Function BaseCharacter.BaseCharacter_C.CheckHitForRagdoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRagdoll_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ApplyImpulse_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            Local_Char                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_ShouldRagdoll                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_ApplyImpulse                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Handle_Knockdown_Resistance_Ragdoll_                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::CheckHitForRagdoll(bool ShouldRagdoll_, bool ApplyImpulse_, class ABaseCharacter_C* Local_Char, bool Local_ShouldRagdoll, bool Local_ApplyImpulse, bool CallFunc_Handle_Knockdown_Resistance_Ragdoll_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Variable, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& K2Node_Select_Default, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& K2Node_Select_Default_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CheckHitForRagdoll");

	Params::ABaseCharacter_C_CheckHitForRagdoll_Params Parms{};

	Parms.ShouldRagdoll_ = ShouldRagdoll_;
	Parms.ApplyImpulse_ = ApplyImpulse_;
	Parms.Local_Char = Local_Char;
	Parms.Local_ShouldRagdoll = Local_ShouldRagdoll;
	Parms.Local_ApplyImpulse = Local_ApplyImpulse;
	Parms.CallFunc_Handle_Knockdown_Resistance_Ragdoll_ = CallFunc_Handle_Knockdown_Resistance_Ragdoll_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CalcCapsuleLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::CalcCapsuleLocation(const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CalcCapsuleLocation");

	Params::ABaseCharacter_C_CalcCapsuleLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.AddPlayerResolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ResolveMultiplier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentBaseResolveGainPerHit_BaseResolveGainPerHit   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellLoreUnlocked_bUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ABaseCharacter_C::AddPlayerResolve(float ResolveMultiplier, float Temp_float_Variable, bool Temp_bool_Variable, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentBaseResolveGainPerHit_BaseResolveGainPerHit, bool CallFunc_IsShellLoreUnlocked_bUnlocked, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AddPlayerResolve");

	Params::ABaseCharacter_C_AddPlayerResolve_Params Parms{};

	Parms.ResolveMultiplier = ResolveMultiplier;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentBaseResolveGainPerHit_BaseResolveGainPerHit = CallFunc_GetCurrentBaseResolveGainPerHit_BaseResolveGainPerHit;
	Parms.CallFunc_IsShellLoreUnlocked_bUnlocked = CallFunc_IsShellLoreUnlocked_bUnlocked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.IsUsingCatehdralPower?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUsingCatedralPower_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::IsUsingCatehdralPower_(class AActor* HitActor, bool* IsUsingCatedralPower_, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "IsUsingCatehdralPower?");

	Params::ABaseCharacter_C_IsUsingCatehdralPower__Params Parms{};

	Parms.HitActor = HitActor;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUsingCatedralPower_ != nullptr)
		*IsUsingCatedralPower_ = Parms.IsUsingCatedralPower_;

}


// Function BaseCharacter.BaseCharacter_C.GetWeaponMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*              WeaponMesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetWeaponMesh(class UMeshComponent** WeaponMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetWeaponMesh");

	Params::ABaseCharacter_C_GetWeaponMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponMesh != nullptr)
		*WeaponMesh = Parms.WeaponMesh;

}


// Function BaseCharacter.BaseCharacter_C.PushCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PushAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::PushCharacter(float PushAmount, class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PushCharacter");

	Params::ABaseCharacter_C_PushCharacter_Params Parms{};

	Parms.PushAmount = PushAmount;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.KnockDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasKnockedDown_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::KnockDown(bool* WasKnockedDown_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "KnockDown");

	Params::ABaseCharacter_C_KnockDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WasKnockedDown_ != nullptr)
		*WasKnockedDown_ = Parms.WasKnockedDown_;

}


// Function BaseCharacter.BaseCharacter_C.GetIsInvulnerable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInvulnerable_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::GetIsInvulnerable(class AActor* Actor, bool* IsInvulnerable_, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetIsInvulnerable");

	Params::ABaseCharacter_C_GetIsInvulnerable_Params Parms{};

	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInvulnerable_ != nullptr)
		*IsInvulnerable_ = Parms.IsInvulnerable_;

}


// Function BaseCharacter.BaseCharacter_C.CancelAllAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::CancelAllAnimations(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CancelAllAnimations");

	Params::ABaseCharacter_C_CancelAllAnimations_Params Parms{};

	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SpawnFootstepParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InSocketName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SpawnFootstepParticles(class FName InSocketName, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SpawnFootstepParticles");

	Params::ABaseCharacter_C_SpawnFootstepParticles_Params Parms{};

	Parms.InSocketName = InSocketName;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DamageDestructibles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DamageDestructibles(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DamageDestructibles");

	Params::ABaseCharacter_C_DamageDestructibles_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SpawnBodyFireParticleFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SpawnBodyFireParticleFX(const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SpawnBodyFireParticleFX");

	Params::ABaseCharacter_C_SpawnBodyFireParticleFX_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SpawnBloodDecals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABaseCharacter_C::SpawnBloodDecals(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, class AActor* HitActor, int32 Temp_int_Variable, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UMaterialInterface* K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SpawnBloodDecals");

	Params::ABaseCharacter_C_SpawnBloodDecals_Params Parms{};

	Parms.ImpactPoint = ImpactPoint;
	Parms.ImpactNormal = ImpactNormal;
	Parms.HitActor = HitActor;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.IsGodMode?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsGodMode_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::IsGodMode_(bool* IsGodMode_, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "IsGodMode?");

	Params::ABaseCharacter_C_IsGodMode__Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsGodMode_ != nullptr)
		*IsGodMode_ = Parms.IsGodMode_;

}


// Function BaseCharacter.BaseCharacter_C.StopHasteFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StopHasteFunction(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopHasteFunction");

	Params::ABaseCharacter_C_StopHasteFunction_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StartHasteFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StartHasteFunction(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartHasteFunction");

	Params::ABaseCharacter_C_StartHasteFunction_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StopSlowFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StopSlowFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopSlowFunction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StartSlowFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StartSlowFunction(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartSlowFunction");

	Params::ABaseCharacter_C_StartSlowFunction_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.IsCharacterFriendlyToPlayer?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsFriendlyToPlayer_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::IsCharacterFriendlyToPlayer_(bool* IsFriendlyToPlayer_, class AController* CallFunc_GetController_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "IsCharacterFriendlyToPlayer?");

	Params::ABaseCharacter_C_IsCharacterFriendlyToPlayer__Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFriendlyToPlayer_ != nullptr)
		*IsFriendlyToPlayer_ = Parms.IsFriendlyToPlayer_;

}


// Function BaseCharacter.BaseCharacter_C.ProcesAtkKnockback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TempKnockback                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     V_PlayerToEnemy                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ProcesAtkKnockback(class AActor* HitActor, float TempKnockback, const struct FVector& V_PlayerToEnemy, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ProcesAtkKnockback");

	Params::ABaseCharacter_C_ProcesAtkKnockback_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.TempKnockback = TempKnockback;
	Parms.V_PlayerToEnemy = V_PlayerToEnemy;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ProcessAttackBuffs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Hit_Actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsPawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_SpawnAIFromClass_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ProcessAttackBuffs(class AActor* Hit_Actor, class AAIController* CallFunc_GetAIController_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPawn, bool K2Node_ClassDynamicCast_bSuccess, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_SpawnAIFromClass_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_1, bool K2Node_DynamicCast_bSuccess_3, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_1, bool K2Node_DynamicCast_bSuccess_4, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_2, bool K2Node_DynamicCast_bSuccess_5, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ProcessAttackBuffs");

	Params::ABaseCharacter_C_ProcessAttackBuffs_Params Parms{};

	Parms.Hit_Actor = Hit_Actor;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPawn = K2Node_ClassDynamicCast_AsPawn;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnAIFromClass_ReturnValue = CallFunc_SpawnAIFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character_1 = K2Node_DynamicCast_AsBase_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_1 = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBase_Character_2 = K2Node_DynamicCast_AsBase_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBase_Character_3 = K2Node_DynamicCast_AsBase_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ExtraKnockbackIfPlayerHeavyAtk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ExtraKnockbackIfPlayerHeavyAtk(class AActor* HitActor, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ExtraKnockbackIfPlayerHeavyAtk");

	Params::ABaseCharacter_C_ExtraKnockbackIfPlayerHeavyAtk_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GetIsBlocking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBlocking                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStoneFormDmgResOn_Yes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::GetIsBlocking(class AActor* Actor, bool* IsBlocking, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsStoneFormDmgResOn_Yes, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetIsBlocking");

	Params::ABaseCharacter_C_GetIsBlocking_Params Parms{};

	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsStoneFormDmgResOn_Yes = CallFunc_IsStoneFormDmgResOn_Yes;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsBlocking != nullptr)
		*IsBlocking = Parms.IsBlocking;

}


// Function BaseCharacter.BaseCharacter_C.ProcessDamageType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ProcessDamageType(class UDamageType* DamageType, float DamageIn, float* DamageOut, bool CallFunc_Greater_FloatFloat_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ProcessDamageType");

	Params::ABaseCharacter_C_ProcessDamageType_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamageIn = DamageIn;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_6 = CallFunc_EqualEqual_ClassClass_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}


// Function BaseCharacter.BaseCharacter_C.GetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void ABaseCharacter_C::GetName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetName");

	Params::ABaseCharacter_C_GetName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BaseCharacter.BaseCharacter_C.GetDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetDamage(float* Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetDamage");

	Params::ABaseCharacter_C_GetDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function BaseCharacter.BaseCharacter_C.GetMeleeTraceEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetMeleeTraceEnd");

	Params::ABaseCharacter_C_GetMeleeTraceEnd_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

}


// Function BaseCharacter.BaseCharacter_C.GetMeleeTraceStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetMeleeTraceStart");

	Params::ABaseCharacter_C_GetMeleeTraceStart_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

}


// Function BaseCharacter.BaseCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Timeline_Stun_Duration__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Timeline_Stun_Duration__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Timeline_Stun_Duration__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Timeline_Stun_Duration__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Timeline_Stun_Duration__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Timeline_Stun_Duration__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.DepetrifyEnemyMaterial__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::DepetrifyEnemyMaterial__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DepetrifyEnemyMaterial__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.DepetrifyEnemyMaterial__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::DepetrifyEnemyMaterial__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DepetrifyEnemyMaterial__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PetrifyEnemyMatieral__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PetrifyEnemyMatieral__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PetrifyEnemyMatieral__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PetrifyEnemyMatieral__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PetrifyEnemyMatieral__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PetrifyEnemyMatieral__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.RestoreCharacterAnimsFrom0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::RestoreCharacterAnimsFrom0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "RestoreCharacterAnimsFrom0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.RestoreCharacterAnimsFrom0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::RestoreCharacterAnimsFrom0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "RestoreCharacterAnimsFrom0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.SlowCharacterAnimsTo0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::SlowCharacterAnimsTo0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SlowCharacterAnimsTo0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.SlowCharacterAnimsTo0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::SlowCharacterAnimsTo0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SlowCharacterAnimsTo0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.BloodMaterialParamTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::BloodMaterialParamTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "BloodMaterialParamTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.BloodMaterialParamTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::BloodMaterialParamTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "BloodMaterialParamTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.BlendOutPhysicsState__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::BlendOutPhysicsState__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "BlendOutPhysicsState__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.BlendOutPhysicsState__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::BlendOutPhysicsState__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "BlendOutPhysicsState__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ImpactTimeDilation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ImpactTimeDilation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ImpactTimeDilation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ImpactTimeDilation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ImpactTimeDilation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ImpactTimeDilation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Timeline_Freezing_Timer__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Timeline_Freezing_Timer__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Timeline_Freezing_Timer__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Timeline_Freezing_Timer__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Timeline_Freezing_Timer__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Timeline_Freezing_Timer__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.FrozenMeshAnimTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::FrozenMeshAnimTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "FrozenMeshAnimTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.FrozenMeshAnimTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseCharacter_C::FrozenMeshAnimTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "FrozenMeshAnimTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABaseCharacter_C::InpActEvt_Semicolon_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "InpActEvt_Semicolon_K2Node_InputKeyEvent_0");

	Params::ABaseCharacter_C_InpActEvt_Semicolon_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyEnd_992F1AAF4FAAA5463E7C618851E92F34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyEnd_992F1AAF4FAAA5463E7C618851E92F34(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyEnd_992F1AAF4FAAA5463E7C618851E92F34");

	Params::ABaseCharacter_C_OnNotifyEnd_992F1AAF4FAAA5463E7C618851E92F34_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyBegin_992F1AAF4FAAA5463E7C618851E92F34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyBegin_992F1AAF4FAAA5463E7C618851E92F34(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyBegin_992F1AAF4FAAA5463E7C618851E92F34");

	Params::ABaseCharacter_C_OnNotifyBegin_992F1AAF4FAAA5463E7C618851E92F34_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInterrupted_992F1AAF4FAAA5463E7C618851E92F34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnInterrupted_992F1AAF4FAAA5463E7C618851E92F34(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInterrupted_992F1AAF4FAAA5463E7C618851E92F34");

	Params::ABaseCharacter_C_OnInterrupted_992F1AAF4FAAA5463E7C618851E92F34_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBlendOut_992F1AAF4FAAA5463E7C618851E92F34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBlendOut_992F1AAF4FAAA5463E7C618851E92F34(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBlendOut_992F1AAF4FAAA5463E7C618851E92F34");

	Params::ABaseCharacter_C_OnBlendOut_992F1AAF4FAAA5463E7C618851E92F34_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnCompleted_992F1AAF4FAAA5463E7C618851E92F34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnCompleted_992F1AAF4FAAA5463E7C618851E92F34(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnCompleted_992F1AAF4FAAA5463E7C618851E92F34");

	Params::ABaseCharacter_C_OnCompleted_992F1AAF4FAAA5463E7C618851E92F34_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyEnd_1482CF924E098CBFEF96C79512BE8278
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyEnd_1482CF924E098CBFEF96C79512BE8278(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyEnd_1482CF924E098CBFEF96C79512BE8278");

	Params::ABaseCharacter_C_OnNotifyEnd_1482CF924E098CBFEF96C79512BE8278_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyBegin_1482CF924E098CBFEF96C79512BE8278
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyBegin_1482CF924E098CBFEF96C79512BE8278(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyBegin_1482CF924E098CBFEF96C79512BE8278");

	Params::ABaseCharacter_C_OnNotifyBegin_1482CF924E098CBFEF96C79512BE8278_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInterrupted_1482CF924E098CBFEF96C79512BE8278
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnInterrupted_1482CF924E098CBFEF96C79512BE8278(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInterrupted_1482CF924E098CBFEF96C79512BE8278");

	Params::ABaseCharacter_C_OnInterrupted_1482CF924E098CBFEF96C79512BE8278_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBlendOut_1482CF924E098CBFEF96C79512BE8278
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBlendOut_1482CF924E098CBFEF96C79512BE8278(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBlendOut_1482CF924E098CBFEF96C79512BE8278");

	Params::ABaseCharacter_C_OnBlendOut_1482CF924E098CBFEF96C79512BE8278_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnCompleted_1482CF924E098CBFEF96C79512BE8278
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnCompleted_1482CF924E098CBFEF96C79512BE8278(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnCompleted_1482CF924E098CBFEF96C79512BE8278");

	Params::ABaseCharacter_C_OnCompleted_1482CF924E098CBFEF96C79512BE8278_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyEnd_1A98AAD744FA738D098E559119A420C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyEnd_1A98AAD744FA738D098E559119A420C2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyEnd_1A98AAD744FA738D098E559119A420C2");

	Params::ABaseCharacter_C_OnNotifyEnd_1A98AAD744FA738D098E559119A420C2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyBegin_1A98AAD744FA738D098E559119A420C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyBegin_1A98AAD744FA738D098E559119A420C2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyBegin_1A98AAD744FA738D098E559119A420C2");

	Params::ABaseCharacter_C_OnNotifyBegin_1A98AAD744FA738D098E559119A420C2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInterrupted_1A98AAD744FA738D098E559119A420C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnInterrupted_1A98AAD744FA738D098E559119A420C2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInterrupted_1A98AAD744FA738D098E559119A420C2");

	Params::ABaseCharacter_C_OnInterrupted_1A98AAD744FA738D098E559119A420C2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBlendOut_1A98AAD744FA738D098E559119A420C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBlendOut_1A98AAD744FA738D098E559119A420C2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBlendOut_1A98AAD744FA738D098E559119A420C2");

	Params::ABaseCharacter_C_OnBlendOut_1A98AAD744FA738D098E559119A420C2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnCompleted_1A98AAD744FA738D098E559119A420C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnCompleted_1A98AAD744FA738D098E559119A420C2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnCompleted_1A98AAD744FA738D098E559119A420C2");

	Params::ABaseCharacter_C_OnCompleted_1A98AAD744FA738D098E559119A420C2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyEnd_27CFDD9346E8EC5E62BDFDB946A36CE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyEnd_27CFDD9346E8EC5E62BDFDB946A36CE3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyEnd_27CFDD9346E8EC5E62BDFDB946A36CE3");

	Params::ABaseCharacter_C_OnNotifyEnd_27CFDD9346E8EC5E62BDFDB946A36CE3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyBegin_27CFDD9346E8EC5E62BDFDB946A36CE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyBegin_27CFDD9346E8EC5E62BDFDB946A36CE3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyBegin_27CFDD9346E8EC5E62BDFDB946A36CE3");

	Params::ABaseCharacter_C_OnNotifyBegin_27CFDD9346E8EC5E62BDFDB946A36CE3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInterrupted_27CFDD9346E8EC5E62BDFDB946A36CE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnInterrupted_27CFDD9346E8EC5E62BDFDB946A36CE3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInterrupted_27CFDD9346E8EC5E62BDFDB946A36CE3");

	Params::ABaseCharacter_C_OnInterrupted_27CFDD9346E8EC5E62BDFDB946A36CE3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBlendOut_27CFDD9346E8EC5E62BDFDB946A36CE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBlendOut_27CFDD9346E8EC5E62BDFDB946A36CE3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBlendOut_27CFDD9346E8EC5E62BDFDB946A36CE3");

	Params::ABaseCharacter_C_OnBlendOut_27CFDD9346E8EC5E62BDFDB946A36CE3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnCompleted_27CFDD9346E8EC5E62BDFDB946A36CE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnCompleted_27CFDD9346E8EC5E62BDFDB946A36CE3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnCompleted_27CFDD9346E8EC5E62BDFDB946A36CE3");

	Params::ABaseCharacter_C_OnCompleted_27CFDD9346E8EC5E62BDFDB946A36CE3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyEnd_9A51F5EC42A5E3DD39E7A2B35B6B2867
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyEnd_9A51F5EC42A5E3DD39E7A2B35B6B2867(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyEnd_9A51F5EC42A5E3DD39E7A2B35B6B2867");

	Params::ABaseCharacter_C_OnNotifyEnd_9A51F5EC42A5E3DD39E7A2B35B6B2867_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyBegin_9A51F5EC42A5E3DD39E7A2B35B6B2867
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyBegin_9A51F5EC42A5E3DD39E7A2B35B6B2867(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyBegin_9A51F5EC42A5E3DD39E7A2B35B6B2867");

	Params::ABaseCharacter_C_OnNotifyBegin_9A51F5EC42A5E3DD39E7A2B35B6B2867_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInterrupted_9A51F5EC42A5E3DD39E7A2B35B6B2867
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnInterrupted_9A51F5EC42A5E3DD39E7A2B35B6B2867(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInterrupted_9A51F5EC42A5E3DD39E7A2B35B6B2867");

	Params::ABaseCharacter_C_OnInterrupted_9A51F5EC42A5E3DD39E7A2B35B6B2867_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBlendOut_9A51F5EC42A5E3DD39E7A2B35B6B2867
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBlendOut_9A51F5EC42A5E3DD39E7A2B35B6B2867(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBlendOut_9A51F5EC42A5E3DD39E7A2B35B6B2867");

	Params::ABaseCharacter_C_OnBlendOut_9A51F5EC42A5E3DD39E7A2B35B6B2867_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnCompleted_9A51F5EC42A5E3DD39E7A2B35B6B2867
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnCompleted_9A51F5EC42A5E3DD39E7A2B35B6B2867(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnCompleted_9A51F5EC42A5E3DD39E7A2B35B6B2867");

	Params::ABaseCharacter_C_OnCompleted_9A51F5EC42A5E3DD39E7A2B35B6B2867_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyEnd_8A96FCC54DD828D63E76D1A0A3C4D115
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyEnd_8A96FCC54DD828D63E76D1A0A3C4D115(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyEnd_8A96FCC54DD828D63E76D1A0A3C4D115");

	Params::ABaseCharacter_C_OnNotifyEnd_8A96FCC54DD828D63E76D1A0A3C4D115_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyBegin_8A96FCC54DD828D63E76D1A0A3C4D115
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyBegin_8A96FCC54DD828D63E76D1A0A3C4D115(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyBegin_8A96FCC54DD828D63E76D1A0A3C4D115");

	Params::ABaseCharacter_C_OnNotifyBegin_8A96FCC54DD828D63E76D1A0A3C4D115_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInterrupted_8A96FCC54DD828D63E76D1A0A3C4D115
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnInterrupted_8A96FCC54DD828D63E76D1A0A3C4D115(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInterrupted_8A96FCC54DD828D63E76D1A0A3C4D115");

	Params::ABaseCharacter_C_OnInterrupted_8A96FCC54DD828D63E76D1A0A3C4D115_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBlendOut_8A96FCC54DD828D63E76D1A0A3C4D115
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBlendOut_8A96FCC54DD828D63E76D1A0A3C4D115(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBlendOut_8A96FCC54DD828D63E76D1A0A3C4D115");

	Params::ABaseCharacter_C_OnBlendOut_8A96FCC54DD828D63E76D1A0A3C4D115_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnCompleted_8A96FCC54DD828D63E76D1A0A3C4D115
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnCompleted_8A96FCC54DD828D63E76D1A0A3C4D115(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnCompleted_8A96FCC54DD828D63E76D1A0A3C4D115");

	Params::ABaseCharacter_C_OnCompleted_8A96FCC54DD828D63E76D1A0A3C4D115_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyEnd_DC3011F541B7923836002696D4B1263A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyEnd_DC3011F541B7923836002696D4B1263A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyEnd_DC3011F541B7923836002696D4B1263A");

	Params::ABaseCharacter_C_OnNotifyEnd_DC3011F541B7923836002696D4B1263A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyBegin_DC3011F541B7923836002696D4B1263A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyBegin_DC3011F541B7923836002696D4B1263A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyBegin_DC3011F541B7923836002696D4B1263A");

	Params::ABaseCharacter_C_OnNotifyBegin_DC3011F541B7923836002696D4B1263A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInterrupted_DC3011F541B7923836002696D4B1263A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnInterrupted_DC3011F541B7923836002696D4B1263A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInterrupted_DC3011F541B7923836002696D4B1263A");

	Params::ABaseCharacter_C_OnInterrupted_DC3011F541B7923836002696D4B1263A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBlendOut_DC3011F541B7923836002696D4B1263A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBlendOut_DC3011F541B7923836002696D4B1263A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBlendOut_DC3011F541B7923836002696D4B1263A");

	Params::ABaseCharacter_C_OnBlendOut_DC3011F541B7923836002696D4B1263A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnCompleted_DC3011F541B7923836002696D4B1263A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnCompleted_DC3011F541B7923836002696D4B1263A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnCompleted_DC3011F541B7923836002696D4B1263A");

	Params::ABaseCharacter_C_OnCompleted_DC3011F541B7923836002696D4B1263A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyEnd_9E0E664D4A3A1C7569A97EAEA53269FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyEnd_9E0E664D4A3A1C7569A97EAEA53269FA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyEnd_9E0E664D4A3A1C7569A97EAEA53269FA");

	Params::ABaseCharacter_C_OnNotifyEnd_9E0E664D4A3A1C7569A97EAEA53269FA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnNotifyBegin_9E0E664D4A3A1C7569A97EAEA53269FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnNotifyBegin_9E0E664D4A3A1C7569A97EAEA53269FA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnNotifyBegin_9E0E664D4A3A1C7569A97EAEA53269FA");

	Params::ABaseCharacter_C_OnNotifyBegin_9E0E664D4A3A1C7569A97EAEA53269FA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInterrupted_9E0E664D4A3A1C7569A97EAEA53269FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnInterrupted_9E0E664D4A3A1C7569A97EAEA53269FA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInterrupted_9E0E664D4A3A1C7569A97EAEA53269FA");

	Params::ABaseCharacter_C_OnInterrupted_9E0E664D4A3A1C7569A97EAEA53269FA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBlendOut_9E0E664D4A3A1C7569A97EAEA53269FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBlendOut_9E0E664D4A3A1C7569A97EAEA53269FA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBlendOut_9E0E664D4A3A1C7569A97EAEA53269FA");

	Params::ABaseCharacter_C_OnBlendOut_9E0E664D4A3A1C7569A97EAEA53269FA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnCompleted_9E0E664D4A3A1C7569A97EAEA53269FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnCompleted_9E0E664D4A3A1C7569A97EAEA53269FA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnCompleted_9E0E664D4A3A1C7569A97EAEA53269FA");

	Params::ABaseCharacter_C_OnCompleted_9E0E664D4A3A1C7569A97EAEA53269FA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.InterruptBuffs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::InterruptBuffs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "InterruptBuffs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PauseAnimSounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PauseAnimSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PauseAnimSounds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ResumeAnimSounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResumeAnimSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResumeAnimSounds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PlayBurningSoundFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PlayBurningSoundFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayBurningSoundFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.MulticastSpawnEmitterAttached
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AttachPointName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::MulticastSpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastSpawnEmitterAttached");

	Params::ABaseCharacter_C_MulticastSpawnEmitterAttached_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.MulticastSpawnEmitterLoc
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::MulticastSpawnEmitterLoc(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastSpawnEmitterLoc");

	Params::ABaseCharacter_C_MulticastSpawnEmitterLoc_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.Location = Location;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.MulticastSoundFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::MulticastSoundFX(class USoundBase* Sound, const struct FVector& Location, class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastSoundFX");

	Params::ABaseCharacter_C_MulticastSoundFX_Params Parms{};

	Parms.Sound = Sound;
	Parms.Location = Location;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.MulticastTeleportFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationTeleportedTo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationTeleportedFrom                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::MulticastTeleportFX(const struct FVector& LocationTeleportedTo, const struct FVector& LocationTeleportedFrom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastTeleportFX");

	Params::ABaseCharacter_C_MulticastTeleportFX_Params Parms{};

	Parms.LocationTeleportedTo = LocationTeleportedTo;
	Parms.LocationTeleportedFrom = LocationTeleportedFrom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ClientPlayImpactSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ClientPlayImpactSound(const struct FVector& ImpactLocation, class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ClientPlayImpactSound");

	Params::ABaseCharacter_C_ClientPlayImpactSound_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetRootMotionFromEverything
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::SetRootMotionFromEverything()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetRootMotionFromEverything");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.IgnoreRootMotionForDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::IgnoreRootMotionForDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "IgnoreRootMotionForDuration");

	Params::ABaseCharacter_C_IgnoreRootMotionForDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ResetTimeDialation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetTimeDialation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetTimeDialation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.DialateTimeForDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DelayBeforeStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DialateTimeForDuration(float Duration, float Amount, float DelayBeforeStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DialateTimeForDuration");

	Params::ABaseCharacter_C_DialateTimeForDuration_Params Parms{};

	Parms.Duration = Duration;
	Parms.Amount = Amount;
	Parms.DelayBeforeStart = DelayBeforeStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ApplyDecreasedStaminaReg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ApplyDecreasedStaminaReg(class AController* Instigator, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ApplyDecreasedStaminaReg");

	Params::ABaseCharacter_C_ApplyDecreasedStaminaReg_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnStoneStunOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnStoneStunOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnStoneStunOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StopEnemyStunTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StopEnemyStunTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopEnemyStunTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StartDPSPoison
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DmgPerSec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DPSApplyFrequency                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StartDPSPoison(float DmgPerSec, float Duration, float DPSApplyFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartDPSPoison");

	Params::ABaseCharacter_C_StartDPSPoison_Params Parms{};

	Parms.DmgPerSec = DmgPerSec;
	Parms.Duration = Duration;
	Parms.DPSApplyFrequency = DPSApplyFrequency;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ResetStopRM
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetStopRM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetStopRM");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.DisableStopRootMotionIfCharWouldFallForDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DisableStopRootMotionIfCharWouldFallForDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DisableStopRootMotionIfCharWouldFallForDuration");

	Params::ABaseCharacter_C_DisableStopRootMotionIfCharWouldFallForDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.InterruptStoneStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::InterruptStoneStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "InterruptStoneStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ResetSlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetSlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetSlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.SlowMovementAndAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SlowMovementAndAnims(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SlowMovementAndAnims");

	Params::ABaseCharacter_C_SlowMovementAndAnims_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StartDPSBurn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 DPSBurnInstigator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DmgPerSec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StartDPSBurn(class AController* DPSBurnInstigator, float DmgPerSec, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartDPSBurn");

	Params::ABaseCharacter_C_StartDPSBurn_Params Parms{};

	Parms.DPSBurnInstigator = DPSBurnInstigator;
	Parms.DmgPerSec = DmgPerSec;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ResetInvulnerability
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetInvulnerability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetInvulnerability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.CharacterInvulnerableForDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::CharacterInvulnerableForDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CharacterInvulnerableForDuration");

	Params::ABaseCharacter_C_CharacterInvulnerableForDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ReverseStoneValueTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ReverseStoneValueTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReverseStoneValueTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.RunStoneFormValueTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::RunStoneFormValueTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "RunStoneFormValueTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ResetStoneStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetStoneStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetStoneStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StoneStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DelayBeforeStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StoneStun(float Duration, float DelayBeforeStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StoneStun");

	Params::ABaseCharacter_C_StoneStun_Params Parms{};

	Parms.Duration = Duration;
	Parms.DelayBeforeStart = DelayBeforeStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnMontageBlendingOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnMontageBlendingOut");

	Params::ABaseCharacter_C_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ResetStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StunCharacterForDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StunCharacterForDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StunCharacterForDuration");

	Params::ABaseCharacter_C_StunCharacterForDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ApplyDOTFirstTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ApplyDOTFirstTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ApplyDOTFirstTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStartParalysisNew
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStartParalysisNew()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStartParalysisNew");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.MulticastShockFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ShockLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::MulticastShockFX(const struct FVector& ShockLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastShockFX");

	Params::ABaseCharacter_C_MulticastShockFX_Params Parms{};

	Parms.ShockLocation = ShockLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ServerShockNearbyEnemy
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerShockNearbyEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerShockNearbyEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.RegisterAnimSFX
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             AudioComp                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::RegisterAnimSFX(class UAudioComponent*& AudioComp, class USkeletalMeshComponent* MeshComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "RegisterAnimSFX");

	Params::ABaseCharacter_C_RegisterAnimSFX_Params Parms{};

	Parms.AudioComp = AudioComp;
	Parms.MeshComp = MeshComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StartBeeDOT
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StartBeeDOT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartBeeDOT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StopBeeDOT
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StopBeeDOT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopBeeDOT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.BeeDOT
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::BeeDOT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "BeeDOT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.BaseFootstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::BaseFootstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "BaseFootstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStopFireImmunity
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStopFireImmunity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStopFireImmunity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStartFireImmunity
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Timer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ServerStartFireImmunity(float Timer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStartFireImmunity");

	Params::ABaseCharacter_C_ServerStartFireImmunity_Params Parms{};

	Parms.Timer = Timer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ServerStopParalysis
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStopParalysis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStopParalysis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStartParalysis
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStartParalysis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStartParalysis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStopSlow
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStopSlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStopSlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStartSlow
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStartSlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStartSlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.MulticastStopHasteFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::MulticastStopHasteFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastStopHasteFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStopHaste
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStopHaste()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStopHaste");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.MulticastHasteFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::MulticastHasteFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastHasteFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStartHaste
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStartHaste()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStartHaste");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.TeleportToRandomPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::TeleportToRandomPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "TeleportToRandomPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerDOT
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerDOT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerDOT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStopDOT
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStopDOT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStopDOT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ServerStartDOT
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ServerStartDOT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerStartDOT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.MulticastImmolate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 InstigatingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::MulticastImmolate(class AController* InstigatingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastImmolate");

	Params::ABaseCharacter_C_MulticastImmolate_Params Parms{};

	Parms.InstigatingController = InstigatingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.MulticastMiniCharacter
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::MulticastMiniCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastMiniCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.MulticastTurnInvisible
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::MulticastTurnInvisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastTurnInvisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.DamageAppliedToHitActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DamageAppliedToHitActor(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DamageAppliedToHitActor");

	Params::ABaseCharacter_C_DamageAppliedToHitActor_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DamageBlocked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DamageBlocked_Event(class AActor* SourceActor, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DamageBlocked_Event");

	Params::ABaseCharacter_C_DamageBlocked_Event_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.HitLocation = HitLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnDamageAppliedToHitActor_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnDamageAppliedToHitActor_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnDamageAppliedToHitActor_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReceiveEndPlay");

	Params::ABaseCharacter_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SpawnCharacterImpactSparks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SpawnCharacterImpactSparks(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SpawnCharacterImpactSparks");

	Params::ABaseCharacter_C_SpawnCharacterImpactSparks_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SwordParticleFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::SwordParticleFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SwordParticleFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.TraceForEnemyMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::TraceForEnemyMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "TraceForEnemyMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.HitStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::HitStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "HitStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ParryNoRiposte_NoResolveReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ParryNoRiposte_NoResolveReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ParryNoRiposte_NoResolveReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ParryNoRiposte_EmpoweredReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ParryNoRiposte_EmpoweredReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ParryNoRiposte_EmpoweredReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.DeathBlowReactionFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::DeathBlowReactionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DeathBlowReactionFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.DeathBlowNotifiesForChildren
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyFired                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DeathBlowNotifiesForChildren(class FName NotifyFired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DeathBlowNotifiesForChildren");

	Params::ABaseCharacter_C_DeathBlowNotifiesForChildren_Params Parms{};

	Parms.NotifyFired = NotifyFired;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ResetMicroHitReactionCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetMicroHitReactionCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetMicroHitReactionCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PlayMicroHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PlayMicroHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayMicroHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ResetBossStaggerCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ResetBossStaggerCD                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ResetBossStaggerCooldown(bool ResetBossStaggerCD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetBossStaggerCooldown");

	Params::ABaseCharacter_C_ResetBossStaggerCooldown_Params Parms{};

	Parms.ResetBossStaggerCD = ResetBossStaggerCD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnSwordParticleCollide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmitterTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParticleTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PhysMat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnSwordParticleCollide(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnSwordParticleCollide");

	Params::ABaseCharacter_C_OnSwordParticleCollide_Params Parms{};

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;
	Parms.Direction = Direction;
	Parms.Normal = Normal;
	Parms.BoneName = BoneName;
	Parms.PhysMat = PhysMat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.RagdollAfterDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::RagdollAfterDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "RagdollAfterDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.GetupFromDeathblow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::GetupFromDeathblow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetupFromDeathblow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PlayDeathblowReactionAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             RiposteWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           RipostePowerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::PlayDeathblowReactionAnimation(enum class EComboTypes RiposteWeapon, enum class ERiposteTypes RipostePowerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayDeathblowReactionAnimation");

	Params::ABaseCharacter_C_PlayDeathblowReactionAnimation_Params Parms{};

	Parms.RiposteWeapon = RiposteWeapon;
	Parms.RipostePowerType = RipostePowerType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ApplyAoeDamageToActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorToHit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldProcStoneForm_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ApplyAoeDamageToActor(float Damage, class AActor* ActorToHit, bool ShouldProcStoneForm_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ApplyAoeDamageToActor");

	Params::ABaseCharacter_C_ApplyAoeDamageToActor_Params Parms{};

	Parms.Damage = Damage;
	Parms.ActorToHit = ActorToHit;
	Parms.ShouldProcStoneForm_ = ShouldProcStoneForm_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CancelParryStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::CancelParryStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CancelParryStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.RefillPoise
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::RefillPoise()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "RefillPoise");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StartPoiseRefillTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StartPoiseRefillTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartPoiseRefillTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ResetPoiseDamageCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetPoiseDamageCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetPoiseDamageCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StartPoiseDamageCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StartPoiseDamageCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartPoiseDamageCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PlayLightHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PlayLightHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayLightHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.DealPoiseDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PoiseDamage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HeavyHitReaction_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HitIgnoresPoiseDamageCooldown_                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ResetsBossStaggerCooldown_                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFromStoneFormDeflection_                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     DirectionToSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DealPoiseDamage(float PoiseDamage, bool HeavyHitReaction_, bool HitIgnoresPoiseDamageCooldown_, bool ResetsBossStaggerCooldown_, bool IsFromStoneFormDeflection_, const struct FVector& DirectionToSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DealPoiseDamage");

	Params::ABaseCharacter_C_DealPoiseDamage_Params Parms{};

	Parms.PoiseDamage = PoiseDamage;
	Parms.HeavyHitReaction_ = HeavyHitReaction_;
	Parms.HitIgnoresPoiseDamageCooldown_ = HitIgnoresPoiseDamageCooldown_;
	Parms.ResetsBossStaggerCooldown_ = ResetsBossStaggerCooldown_;
	Parms.IsFromStoneFormDeflection_ = IsFromStoneFormDeflection_;
	Parms.DirectionToSource = DirectionToSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ForceHeavyStaggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DirectionToSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ForceHeavyStaggerDamage(const struct FVector& DirectionToSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ForceHeavyStaggerDamage");

	Params::ABaseCharacter_C_ForceHeavyStaggerDamage_Params Parms{};

	Parms.DirectionToSource = DirectionToSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StaggerFromHit?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallChildFunction_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::StaggerFromHit_(bool CallChildFunction_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StaggerFromHit?");

	Params::ABaseCharacter_C_StaggerFromHit__Params Parms{};

	Parms.CallChildFunction_ = CallChildFunction_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.PlayParryHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PlayParryHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayParryHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.HardParry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            ParriedChar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::HardParry(class ABaseCharacter_C* ParriedChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "HardParry");

	Params::ABaseCharacter_C_HardParry_Params Parms{};

	Parms.ParriedChar = ParriedChar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ReenableGravityAfterDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ReenableGravityAfterDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReenableGravityAfterDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ReturnDamageToAttacker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ReturnDamageToAttacker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReturnDamageToAttacker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.OnHitUpdateMeshBloodParams
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnHitUpdateMeshBloodParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnHitUpdateMeshBloodParams");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ApplyDamageToHitActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageToApply                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ApplyDamageToHitActor(float DamageToApply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ApplyDamageToHitActor");

	Params::ABaseCharacter_C_ApplyDamageToHitActor_Params Parms{};

	Parms.DamageToApply = DamageToApply;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.HitSpawnParticleFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::HitSpawnParticleFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "HitSpawnParticleFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.SpawnHitFXatLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SpawnHitFXatLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SpawnHitFXatLocation");

	Params::ABaseCharacter_C_SpawnHitFXatLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StartDamageDealtTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StartDamageDealtTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartDamageDealtTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ResetDamageDealt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetDamageDealt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetDamageDealt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.OnBloodFXCollide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmitterTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParticleTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PhysMat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBloodFXCollide(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBloodFXCollide");

	Params::ABaseCharacter_C_OnBloodFXCollide_Params Parms{};

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;
	Parms.Direction = Direction;
	Parms.Normal = Normal;
	Parms.BoneName = BoneName;
	Parms.PhysMat = PhysMat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ServerApplyPointDamage
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>          HItResults                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// float                              PushAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldVictimRagdoll_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldVictimHeavyStagger_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              PoiseDamage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitIgnoresPoiseDamageCooldown_                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              DamageMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerHitReactionTypes PlayerHitReactionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ApplyImpulseToRagdoll_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ServerApplyPointDamage(TArray<struct FHitResult>& HItResults, float PushAmount, bool ShouldVictimRagdoll_, bool ShouldVictimHeavyStagger_, float PoiseDamage, bool HitIgnoresPoiseDamageCooldown_, float DamageMultiplier, enum class EPlayerHitReactionTypes PlayerHitReactionType, class UClass* DamageType, class FName OptionalSocketOverride, bool ApplyImpulseToRagdoll_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerApplyPointDamage");

	Params::ABaseCharacter_C_ServerApplyPointDamage_Params Parms{};

	Parms.HItResults = HItResults;
	Parms.PushAmount = PushAmount;
	Parms.ShouldVictimRagdoll_ = ShouldVictimRagdoll_;
	Parms.ShouldVictimHeavyStagger_ = ShouldVictimHeavyStagger_;
	Parms.PoiseDamage = PoiseDamage;
	Parms.HitIgnoresPoiseDamageCooldown_ = HitIgnoresPoiseDamageCooldown_;
	Parms.DamageMultiplier = DamageMultiplier;
	Parms.PlayerHitReactionType = PlayerHitReactionType;
	Parms.DamageType = DamageType;
	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.ApplyImpulseToRagdoll_ = ApplyImpulseToRagdoll_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.MulticastGrowCharacter
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::MulticastGrowCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MulticastGrowCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.OnPlayerRagdollStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnPlayerRagdollStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnPlayerRagdollStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ApplyFallDmg
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ApplyFallDmg()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ApplyFallDmg");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.UnequipBallistazookaOnRagdollStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::UnequipBallistazookaOnRagdollStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "UnequipBallistazookaOnRagdollStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ClearLockOnTargetOnRagdollStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ClearLockOnTargetOnRagdollStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ClearLockOnTargetOnRagdollStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StartRagdollPhysicsBlend
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StartRagdollPhysicsBlend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartRagdollPhysicsBlend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ForceStopLightHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ForceStopLightHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ForceStopLightHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StopRagdollAfterCaching
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StopRagdollAfterCaching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopRagdollAfterCaching");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.CacheRagdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::CacheRagdoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CacheRagdoll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StopRagdollPhysicsBlend
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StopRagdollPhysicsBlend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopRagdollPhysicsBlend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PlayHardImpactEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPlayScreenShakeAndForceFeedback                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::PlayHardImpactEffect(const struct FVector& Location, const struct FRotator& Rotation, bool bPlayScreenShakeAndForceFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayHardImpactEffect");

	Params::ABaseCharacter_C_PlayHardImpactEffect_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bPlayScreenShakeAndForceFeedback = bPlayScreenShakeAndForceFeedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StopRagdollImmediately
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StopRagdollImmediately()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopRagdollImmediately");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ResetImpactCondition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ResetImpactCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ResetImpactCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StartRagdollAndAddImpulseAtLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                ActiveRagdollMontage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        bone                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StartRagdollAndAddImpulseAtLocation(class UAnimMontage* ActiveRagdollMontage, const struct FVector& Impulse, const struct FVector& Location, class FName bone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartRagdollAndAddImpulseAtLocation");

	Params::ABaseCharacter_C_StartRagdollAndAddImpulseAtLocation_Params Parms{};

	Parms.ActiveRagdollMontage = ActiveRagdollMontage;
	Parms.Impulse = Impulse;
	Parms.Location = Location;
	Parms.bone = bone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SubToMovModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::SubToMovModeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SubToMovModeChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.MovementModeChangedDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PreviousCustomMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::MovementModeChangedDelegate_Event_0(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "MovementModeChangedDelegate_Event_0");

	Params::ABaseCharacter_C_MovementModeChangedDelegate_Event_0_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABaseCharacter_C::OnLanded(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnLanded");

	Params::ABaseCharacter_C_OnLanded_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABaseCharacter_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::ABaseCharacter_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.PostSetupRagdollOrientation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PostSetupRagdollOrientation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PostSetupRagdollOrientation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PreSetupRagdollOrientation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PreSetupRagdollOrientation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PreSetupRagdollOrientation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.AddImpulseAfterDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::AddImpulseAfterDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AddImpulseAfterDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.PlayRagdollGetupMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::PlayRagdollGetupMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PlayRagdollGetupMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StopRagdollAfterTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BaseStaggerDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StopRagdollAfterTimer(float BaseStaggerDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopRagdollAfterTimer");

	Params::ABaseCharacter_C_StopRagdollAfterTimer_Params Parms{};

	Parms.BaseStaggerDuration = BaseStaggerDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CachePose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::CachePose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CachePose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.StartRagdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                ActiveRagdollMontage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::StartRagdoll(class UAnimMontage* ActiveRagdollMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StartRagdoll");

	Params::ABaseCharacter_C_StartRagdoll_Params Parms{};

	Parms.ActiveRagdollMontage = ActiveRagdollMontage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.PartialPhysicsSimulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Simulate_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        BelowBone                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::PartialPhysicsSimulation(bool Simulate_, class FName BelowBone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "PartialPhysicsSimulation");

	Params::ABaseCharacter_C_PartialPhysicsSimulation_Params Parms{};

	Parms.Simulate_ = Simulate_;
	Parms.BelowBone = BelowBone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CheckPelvisSimulating
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::CheckPelvisSimulating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CheckPelvisSimulating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReceiveTick");

	Params::ABaseCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnBuffOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBuffObject_C*               BuffObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnBuffOver(class UBuffObject_C* BuffObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnBuffOver");

	Params::ABaseCharacter_C_OnBuffOver_Params Parms{};

	Parms.BuffObject = BuffObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GibCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::GibCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GibCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.ApplyBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBuffObject_C*               BuffToStart                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ApplyBuff(class UBuffObject_C* BuffToStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ApplyBuff");

	Params::ABaseCharacter_C_ApplyBuff_Params Parms{};

	Parms.BuffToStart = BuffToStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GetKicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Kicker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     KickerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetKicked(class AActor* Kicker, const struct FVector& KickerLocation, const struct FVector& ImpactLocation, const struct FVector& Impulse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetKicked");

	Params::ABaseCharacter_C_GetKicked_Params Parms{};

	Parms.Kicker = Kicker;
	Parms.KickerLocation = KickerLocation;
	Parms.ImpactLocation = ImpactLocation;
	Parms.Impulse = Impulse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.DelayedFreeze
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FreezeDuration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::DelayedFreeze(float Delay, float FreezeDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "DelayedFreeze");

	Params::ABaseCharacter_C_DelayedFreeze_Params Parms{};

	Parms.Delay = Delay;
	Parms.FreezeDuration = FreezeDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.Freezing_Timeline_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Freezing_Timeline_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Freezing_Timeline_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Freezing_Timeline_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::Freezing_Timeline_Start(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Freezing_Timeline_Start");

	Params::ABaseCharacter_C_Freezing_Timeline_Start_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.Freeze_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Freeze_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Freeze_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Freeze_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::Freeze_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Freeze_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.UnFreeze
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::UnFreeze()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "UnFreeze");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.Freeze
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FreezeDuration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::Freeze(float FreezeDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Freeze");

	Params::ABaseCharacter_C_Freeze_Params Parms{};

	Parms.FreezeDuration = FreezeDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ExecuteUbergraph_BaseCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// enum class EDynamicForceFeedbackActionTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// enum class EDynamicForceFeedbackActionTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_CustomEvent_EmitterTemplate_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_CustomEvent_AttachToComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AttachPointName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_CustomEvent_EmitterTemplate                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HitActor_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStoneFormDmgResOn_Yes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_LocationTeleportedTo                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_LocationTeleportedFrom                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ImpactLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HitActor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DelayBeforeStart_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObject_C*               CallFunc_GetBuffFromClass_BuffObject                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObjectDecreaseStaminaReg_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObjectDecreaseStaminaReg_C*K2Node_DynamicCast_AsBuff_Object_Decrease_Stamina_Reg            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 K2Node_CustomEvent_Instigator                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObject_C*               CallFunc_GetBuffFromClass_BuffObject_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObjectPoisonDPS_C*      CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObjectPoisonDPS_C*      K2Node_DynamicCast_AsBuff_Object_Poison_DPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_DmgPerSec_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DPSApplyFrequency                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObject_C*               CallFunc_GetBuffFromClass_BuffObject_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObjectFireDPS_C*        CallFunc_SpawnObject_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObjectFireDPS_C*        K2Node_DynamicCast_AsBuff_Object_Fire_DPS                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Duration_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHCharacterMovementComponent*K2Node_DynamicCast_AsDHCharacter_Movement_Component              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHCharacterMovementComponent*K2Node_DynamicCast_AsDHCharacter_Movement_Component_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_DPSBurnInstigator                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DmgPerSec                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Duration_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DelayBeforeStart                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bInterrupted                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ShockLocation                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_CustomEvent_AudioComp                                     (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_CustomEvent_MeshComp                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingleForObjects_OutHit                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingleForObjects_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Timer                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_6                       (NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_7                       (NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AZero_Base_C*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyRadialDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 K2Node_CustomEvent_InstigatingController                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleHardParryCooldown_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_8                       (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_SourceActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBloodDirectionForCurrentStrike_Dir                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBloodDirectionForCurrentStrike_bSet                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakRotIntoAxes_X                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakRotIntoAxes_Y                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakRotIntoAxes_Z                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotationFromAxes_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MeshSphereTrace_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_MeshSphereTrace_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBloodSpawnScale_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetHeadBoneLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_9                       (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyFired                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// class ABossBaseCharacter_C*        K2Node_DynamicCast_AsBoss_Base_Character                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ResetBossStaggerCD                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_36                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_37                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_EventName_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EmitterTime_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ParticleTime_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Velocity_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Normal_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           K2Node_CustomEvent_PhysMat_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_38                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetWeaponMesh_WeaponMesh                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_39                          (ZeroConstructor, NoDestructor)
// enum class EComboTypes             K2Node_CustomEvent_RiposteWeapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_CustomEvent_RipostePowerType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ActorToHit                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShouldProcStoneForm_                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActorName_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_10                      (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_11                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_PoiseDamage_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HeavyHitReaction_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_HitIgnoresPoiseDamageCooldown__1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ResetsBossStaggerCooldown_                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsFromStoneFormDeflection_                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_DirectionToSource_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_40                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_DirectionToSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CallChildFunction_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_ParriedChar                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForHardParry_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyPointDamage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetWeaponMesh_WeaponMesh_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_DamageToApply                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetResolveMultiplierOnBeingHit_Multiplier               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DirectionTo2D_Dir                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_5                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_6                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_EventName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EmitterTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ParticleTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Velocity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Normal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           K2Node_CustomEvent_PhysMat                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGodMode__IsGodMode_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamage_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyPointDamage_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          K2Node_CustomEvent_HItResults                                    (ConstParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PushAmount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShouldVictimRagdoll_                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ShouldVictimHeavyStagger_                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_PoiseDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HitIgnoresPoiseDamageCooldown_                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_DamageMultiplier                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerHitReactionTypes K2Node_CustomEvent_PlayerHitReactionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_DamageType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_OptionalSocketOverride                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ApplyImpulseToRagdoll_                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcPoiseDamage_PoiseOut                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_3                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_41                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_12                      (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBoostedDmgAgainstActor_BoostedDmg                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingCatehdralPower__IsUsingCatedralPower_            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsInvulnerable_IsInvulnerable_                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsBlocking_IsBlocking                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_42                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_13                      (NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_6                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_43                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Handle_Knockdown_Resistance_Ragdoll_                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Handle_Knockdown_Resistance_Ragdoll__1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_44                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_45                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_46                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_ApplyFallDamage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select_Default_4                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyFallDamage_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_40                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldApplyFallDamage_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_47                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_48                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_49                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPDmgEffect_C*              CallFunc_GetDmgEffectFromClass_DmgEffect                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_50                          (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bPlayScreenShakeAndForceFeedback              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_7                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARagdollImpactEffect_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_51                          (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_GetPhysicsLinearVelocity_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_52                          (ZeroConstructor, NoDestructor)
// class UAnimMontage*                K2Node_CustomEvent_ActiveRagdollMontage_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Impulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Bone                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_PrevMovementMode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_PreviousCustomMode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_HitComponent                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_NormalImpulse                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_Hit                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_7                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_53                          (ZeroConstructor, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_41                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_8                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterRagdollInterface_C>K2Node_DynamicCast_AsCharacter_Ragdoll_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_42                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CalculateFacingDirection_IsFacingUp_                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterRagdollInterface_C>K2Node_DynamicCast_AsCharacter_Ragdoll_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_43                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterRagdollInterface_C>K2Node_DynamicCast_AsCharacter_Ragdoll_Interface_2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_44                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_BaseStaggerDuration                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_14                      (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_ActiveRagdollMontage                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Simulate_                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_BelowBone                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_36                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSimulatingPhysics_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_45                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_54                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_37                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingleForObjects_OutHit_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingleForObjects_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_9                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_9                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               K2Node_CustomEvent_BuffObject                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCapsuleRagdollVelocity_value                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGibExplosion_C*             CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGibExplosion_C*             CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_55                          (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGibExplosion_C*             CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleGetKickedCooldown_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_46                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_38                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_56                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_39                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_57                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_KickRune_1_Success_                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObject_C*               K2Node_CustomEvent_BuffToStart                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_47                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HandleKickRunes_KickRune                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ProjectVectorOnToPlane_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_58                          (ZeroConstructor, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_15                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_48                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Kicker                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_KickerLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Impulse                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FreezeDuration_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_49                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_50                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_8                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_4                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_5                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_9                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FreezeDuration                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_51                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_59                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_16                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ExecuteUbergraph_BaseCharacter(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class AActor*>& Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, enum class EDynamicForceFeedbackAction Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_2, float CallFunc_Lerp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, enum class EDynamicForceFeedbackAction Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key, int32 CallFunc_Array_Length_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate_1, class USceneComponent* K2Node_CustomEvent_AttachToComponent, class FName K2Node_CustomEvent_AttachPointName, const struct FVector& K2Node_CustomEvent_Location_8, const struct FRotator& K2Node_CustomEvent_Rotation_3, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, const struct FVector& K2Node_CustomEvent_Location_7, const struct FRotator& K2Node_CustomEvent_Rotation_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class USoundBase* K2Node_CustomEvent_Sound, const struct FVector& K2Node_CustomEvent_Location_6, class AActor* K2Node_CustomEvent_HitActor_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_IsStoneFormDmgResOn_Yes, const struct FVector& K2Node_CustomEvent_LocationTeleportedTo, const struct FVector& K2Node_CustomEvent_LocationTeleportedFrom, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FVector& K2Node_CustomEvent_ImpactLocation, class AActor* K2Node_CustomEvent_HitActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float K2Node_CustomEvent_Duration_10, float K2Node_CustomEvent_Duration_9, float K2Node_CustomEvent_Amount, float K2Node_CustomEvent_DelayBeforeStart_1, bool Temp_bool_Variable_1, class UBuffObject_C* CallFunc_GetBuffFromClass_BuffObject, class UBuffObjectDecreaseStaminaReg_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UBuffObjectDecreaseStaminaReg_C* K2Node_DynamicCast_AsBuff_Object_Decrease_Stamina_Reg, bool K2Node_DynamicCast_bSuccess_1, class AController* K2Node_CustomEvent_Instigator, float K2Node_CustomEvent_Duration_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UBuffObject_C* CallFunc_GetBuffFromClass_BuffObject_1, class UBuffObjectPoisonDPS_C* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UBuffObjectPoisonDPS_C* K2Node_DynamicCast_AsBuff_Object_Poison_DPS, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, float K2Node_CustomEvent_DmgPerSec_1, float K2Node_CustomEvent_Duration_7, float K2Node_CustomEvent_DPSApplyFrequency, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_BooleanOR_ReturnValue, class UBuffObject_C* CallFunc_GetBuffFromClass_BuffObject_2, class UBuffObjectFireDPS_C* CallFunc_SpawnObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class UBuffObjectFireDPS_C* K2Node_DynamicCast_AsBuff_Object_Fire_DPS, bool K2Node_DynamicCast_bSuccess_3, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, float K2Node_CustomEvent_Duration_6, class UDHCharacterMovementComponent* K2Node_DynamicCast_AsDHCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, bool CallFunc_IsValid_ReturnValue_5, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_5, class UDHCharacterMovementComponent* K2Node_DynamicCast_AsDHCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float Temp_float_Variable_2, bool Temp_bool_Variable_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float K2Node_CustomEvent_Duration_5, class AController* K2Node_CustomEvent_DPSBurnInstigator, float K2Node_CustomEvent_DmgPerSec, float K2Node_CustomEvent_Duration_4, float K2Node_CustomEvent_Duration_3, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_7, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_2, bool K2Node_DynamicCast_bSuccess_8, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_3, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_6, float K2Node_CustomEvent_Duration_2, float K2Node_CustomEvent_DelayBeforeStart, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, float K2Node_CustomEvent_Duration_1, float CallFunc_Divide_FloatFloat_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_10, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_11, class AZero_Base_C* K2Node_DynamicCast_As0_Base_3, bool K2Node_DynamicCast_bSuccess_12, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& K2Node_CustomEvent_ShockLocation, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAudioComponent* K2Node_CustomEvent_AudioComp, class USkeletalMeshComponent* K2Node_CustomEvent_MeshComp, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_ApplyDamage_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float K2Node_CustomEvent_Timer, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_6, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AZero_Base_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_7, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, TArray<class AZero_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ApplyRadialDamage_ReturnValue, float CallFunc_ApplyDamage_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class AController* K2Node_CustomEvent_InstigatingController, bool CallFunc_HandleHardParryCooldown_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_8, float K2Node_CustomEvent_Damage_1, bool Temp_bool_Variable_3, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class AActor* K2Node_CustomEvent_SourceActor, const struct FVector& K2Node_CustomEvent_HitLocation, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FVector& CallFunc_GetBloodDirectionForCurrentStrike_Dir, bool CallFunc_GetBloodDirectionForCurrentStrike_bSet, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_BreakRotIntoAxes_X, const struct FVector& CallFunc_BreakRotIntoAxes_Y, const struct FVector& CallFunc_BreakRotIntoAxes_Z, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Location_5, const struct FRotator& K2Node_CustomEvent_Rotation_1, const struct FVector& K2Node_CustomEvent_Scale, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool Temp_bool_Variable_4, bool CallFunc_MeshSphereTrace_ReturnValue, const struct FHitResult& CallFunc_MeshSphereTrace_OutHit, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, const struct FVector& CallFunc_GetBloodSpawnScale_ReturnValue, bool Temp_bool_Variable_5, const struct FVector& CallFunc_GetHeadBoneLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_9, bool Temp_bool_Variable_6, class AZero_Base_C* K2Node_DynamicCast_As0_Base_4, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base_5, bool K2Node_DynamicCast_bSuccess_14, class FName Temp_name_Variable_4, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_15, class FName K2Node_CustomEvent_NotifyFired, class FName K2Node_CustomEvent_NotifyName_20, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UAudioComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_9, class FName K2Node_CustomEvent_NotifyName_22, bool CallFunc_IsValid_ReturnValue_10, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_4, bool K2Node_DynamicCast_bSuccess_16, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, class ABossBaseCharacter_C* K2Node_DynamicCast_AsBoss_Base_Character, bool K2Node_DynamicCast_bSuccess_17, bool K2Node_CustomEvent_ResetBossStaggerCD, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, class FName K2Node_CustomEvent_NotifyName_24, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, class FName K2Node_CustomEvent_EventName_1, float K2Node_CustomEvent_EmitterTime_1, int32 K2Node_CustomEvent_ParticleTime_1, const struct FVector& K2Node_CustomEvent_Location_4, const struct FVector& K2Node_CustomEvent_Velocity_1, const struct FVector& K2Node_CustomEvent_Direction_1, const struct FVector& K2Node_CustomEvent_Normal_1, class FName K2Node_CustomEvent_BoneName_1, class UPhysicalMaterial* K2Node_CustomEvent_PhysMat_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_38, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_5, bool K2Node_DynamicCast_bSuccess_18, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UMeshComponent* CallFunc_GetWeaponMesh_WeaponMesh, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_14, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_6, bool K2Node_DynamicCast_bSuccess_19, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_7, bool K2Node_DynamicCast_bSuccess_20, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_8, bool K2Node_DynamicCast_bSuccess_21, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_9, bool K2Node_DynamicCast_bSuccess_22, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_39, enum class EComboTypes K2Node_CustomEvent_RiposteWeapon, enum class ERiposteTypes K2Node_CustomEvent_RipostePowerType, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_CustomEvent_Damage, class AActor* K2Node_CustomEvent_ActorToHit, bool K2Node_CustomEvent_ShouldProcStoneForm_, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_1, bool K2Node_DynamicCast_bSuccess_23, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_ApplyDamage_ReturnValue_3, class AZero_Base_C* K2Node_DynamicCast_As0_Base_6, bool K2Node_DynamicCast_bSuccess_24, class FName CallFunc_GetActorName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_10, bool K2Node_DynamicCast_bSuccess_25, class FName Temp_name_Variable_5, bool K2Node_SwitchName_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_11, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_CustomEvent_PoiseDamage_1, bool K2Node_CustomEvent_HeavyHitReaction_, bool K2Node_CustomEvent_HitIgnoresPoiseDamageCooldown__1, bool K2Node_CustomEvent_ResetsBossStaggerCooldown_, bool K2Node_CustomEvent_IsFromStoneFormDeflection_, const struct FVector& K2Node_CustomEvent_DirectionToSource_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_25, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_2, bool K2Node_DynamicCast_bSuccess_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_40, int32 Temp_int_Loop_Counter_Variable_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_11, bool K2Node_DynamicCast_bSuccess_27, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, const struct FVector& K2Node_CustomEvent_DirectionToSource, bool K2Node_CustomEvent_CallChildFunction_, int32 CallFunc_Array_Length_ReturnValue_5, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, class AZero_Base_C* K2Node_DynamicCast_As0_Base_7, bool K2Node_DynamicCast_bSuccess_28, bool CallFunc_CheckForHardParry_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool K2Node_Select_Default_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_ApplyPointDamage_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_12, bool K2Node_DynamicCast_bSuccess_29, class UMeshComponent* CallFunc_GetWeaponMesh_WeaponMesh_1, bool CallFunc_IsValid_ReturnValue_17, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_CustomEvent_DamageToApply, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit_4, bool CallFunc_BreakHitResult_bInitialOverlap_4, float CallFunc_BreakHitResult_Time_4, float CallFunc_BreakHitResult_Distance_4, const struct FVector& CallFunc_BreakHitResult_Location_4, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_4, const struct FVector& CallFunc_BreakHitResult_Normal_4, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_4, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_4, class AActor* CallFunc_BreakHitResult_HitActor_4, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_4, class FName CallFunc_BreakHitResult_HitBoneName_4, int32 CallFunc_BreakHitResult_HitItem_4, int32 CallFunc_BreakHitResult_FaceIndex_4, const struct FVector& CallFunc_BreakHitResult_TraceStart_4, const struct FVector& CallFunc_BreakHitResult_TraceEnd_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_3, bool K2Node_DynamicCast_bSuccess_30, float CallFunc_GetResolveMultiplierOnBeingHit_Multiplier, const struct FVector& CallFunc_DirectionTo2D_Dir, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_26, int32 Temp_int_Array_Index_Variable_2, const struct FVector& K2Node_CustomEvent_Location_3, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_5, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_6, class AZero_Base_C* K2Node_DynamicCast_As0_Base_8, bool K2Node_DynamicCast_bSuccess_31, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FClamp_ReturnValue, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, int32 K2Node_CustomEvent_ParticleTime, const struct FVector& K2Node_CustomEvent_Location_2, const struct FVector& K2Node_CustomEvent_Velocity, const struct FVector& K2Node_CustomEvent_Direction, const struct FVector& K2Node_CustomEvent_Normal, class FName K2Node_CustomEvent_BoneName, class UPhysicalMaterial* K2Node_CustomEvent_PhysMat, int32 Temp_int_Array_Index_Variable_3, class UAudioComponent* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsGodMode__IsGodMode_, class AController* CallFunc_GetController_ReturnValue_1, float CallFunc_GetDamage_Damage, float CallFunc_ApplyPointDamage_ReturnValue_1, TArray<struct FHitResult>& K2Node_CustomEvent_HItResults, float K2Node_CustomEvent_PushAmount, bool K2Node_CustomEvent_ShouldVictimRagdoll_, bool K2Node_CustomEvent_ShouldVictimHeavyStagger_, float K2Node_CustomEvent_PoiseDamage, bool K2Node_CustomEvent_HitIgnoresPoiseDamageCooldown_, float K2Node_CustomEvent_DamageMultiplier, enum class EPlayerHitReactionTypes K2Node_CustomEvent_PlayerHitReactionType, class UClass* K2Node_CustomEvent_DamageType, class FName K2Node_CustomEvent_OptionalSocketOverride, bool K2Node_CustomEvent_ApplyImpulseToRagdoll_, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_CalcPoiseDamage_PoiseOut, const struct FHitResult& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_BreakHitResult_bBlockingHit_5, bool CallFunc_BreakHitResult_bInitialOverlap_5, float CallFunc_BreakHitResult_Time_5, float CallFunc_BreakHitResult_Distance_5, const struct FVector& CallFunc_BreakHitResult_Location_5, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_5, const struct FVector& CallFunc_BreakHitResult_Normal_5, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_5, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_5, class AActor* CallFunc_BreakHitResult_HitActor_5, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_5, class FName CallFunc_BreakHitResult_HitBoneName_5, int32 CallFunc_BreakHitResult_HitItem_5, int32 CallFunc_BreakHitResult_FaceIndex_5, const struct FVector& CallFunc_BreakHitResult_TraceStart_5, const struct FVector& CallFunc_BreakHitResult_TraceEnd_5, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_4, bool K2Node_DynamicCast_bSuccess_32, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_41, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_12, float CallFunc_GetBoostedDmgAgainstActor_BoostedDmg, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_5, bool K2Node_DynamicCast_bSuccess_33, float CallFunc_Multiply_FloatFloat_ReturnValue_7, bool CallFunc_IsUsingCatehdralPower__IsUsingCatedralPower_, float K2Node_Select_Default_2, float K2Node_Select_Default_3, bool CallFunc_GetIsInvulnerable_IsInvulnerable_, bool CallFunc_GetIsBlocking_IsBlocking, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, uint8 CallFunc_MakeLiteralByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_42, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_13, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_13, bool K2Node_DynamicCast_bSuccess_34, bool CallFunc_BreakHitResult_bBlockingHit_6, bool CallFunc_BreakHitResult_bInitialOverlap_6, float CallFunc_BreakHitResult_Time_6, float CallFunc_BreakHitResult_Distance_6, const struct FVector& CallFunc_BreakHitResult_Location_6, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_6, const struct FVector& CallFunc_BreakHitResult_Normal_6, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_6, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_6, class AActor* CallFunc_BreakHitResult_HitActor_6, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_6, class FName CallFunc_BreakHitResult_HitBoneName_6, int32 CallFunc_BreakHitResult_HitItem_6, int32 CallFunc_BreakHitResult_FaceIndex_6, const struct FVector& CallFunc_BreakHitResult_TraceStart_6, const struct FVector& CallFunc_BreakHitResult_TraceEnd_6, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_6, bool K2Node_DynamicCast_bSuccess_35, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base_9, bool K2Node_DynamicCast_bSuccess_36, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base_10, bool K2Node_DynamicCast_bSuccess_37, class AController* CallFunc_GetController_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_4, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_38, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_7, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_43, int32 Temp_int_Array_Index_Variable_4, class UBuffObject_C* CallFunc_Array_Get_Item_4, class FName K2Node_CustomEvent_NotifyName_27, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_14, bool K2Node_DynamicCast_bSuccess_39, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_Handle_Knockdown_Resistance_Ragdoll_, bool CallFunc_Handle_Knockdown_Resistance_Ragdoll__1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_44, class FName K2Node_CustomEvent_NotifyName_28, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_45, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class FName K2Node_CustomEvent_NotifyName_29, bool Temp_bool_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_46, float CallFunc_ApplyFallDamage_ReturnValue, class USceneComponent* K2Node_Select_Default_4, float CallFunc_ApplyFallDamage_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base_11, bool K2Node_DynamicCast_bSuccess_40, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_ShouldApplyFallDamage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_8, float CallFunc_MapRangeClamped_ReturnValue_1, class FName Temp_name_Variable_6, class FName K2Node_CustomEvent_NotifyName_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_47, class FName K2Node_CustomEvent_NotifyName_31, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_48, bool CallFunc_Not_PreBool_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_10, class FName K2Node_CustomEvent_NotifyName_32, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_49, bool CallFunc_Not_PreBool_ReturnValue_11, int32 Temp_int_Array_Index_Variable_5, class FName K2Node_CustomEvent_NotifyName_33, class UClass* CallFunc_Array_Get_Item_5, class UBPDmgEffect_C* CallFunc_GetDmgEffectFromClass_DmgEffect, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_50, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Location_1, const struct FRotator& K2Node_CustomEvent_Rotation, bool K2Node_CustomEvent_bPlayScreenShakeAndForceFeedback, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_7, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARagdollImpactEffect_C* CallFunc_FinishSpawningActor_ReturnValue, class FName K2Node_CustomEvent_NotifyName_34, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_51, const struct FVector& CallFunc_GetPhysicsLinearVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_52, class UAnimMontage* K2Node_CustomEvent_ActiveRagdollMontage_1, const struct FVector& K2Node_CustomEvent_Impulse, const struct FVector& K2Node_CustomEvent_Location, class FName K2Node_CustomEvent_Bone, enum class ERiposteTypes Temp_byte_Variable_2, class UAnimMontage* K2Node_Select_Default_5, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsValid_ReturnValue_23, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_8, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_8, float CallFunc_Subtract_FloatFloat_ReturnValue_4, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Add_FloatFloat_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_Not_PreBool_ReturnValue_12, class FName Temp_name_Variable_7, bool CallFunc_BooleanAND_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, bool CallFunc_BreakHitResult_bBlockingHit_7, bool CallFunc_BreakHitResult_bInitialOverlap_7, float CallFunc_BreakHitResult_Time_7, float CallFunc_BreakHitResult_Distance_7, const struct FVector& CallFunc_BreakHitResult_Location_7, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_7, const struct FVector& CallFunc_BreakHitResult_Normal_7, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_7, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_7, class AActor* CallFunc_BreakHitResult_HitActor_7, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_7, class FName CallFunc_BreakHitResult_HitBoneName_7, int32 CallFunc_BreakHitResult_HitItem_7, int32 CallFunc_BreakHitResult_FaceIndex_7, const struct FVector& CallFunc_BreakHitResult_TraceStart_7, const struct FVector& CallFunc_BreakHitResult_TraceEnd_7, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_13, float CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_6, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_7, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_35, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_53, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_7, bool K2Node_DynamicCast_bSuccess_41, bool CallFunc_Not_PreBool_ReturnValue_14, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_8, bool CallFunc_BreakHitResult_bInitialOverlap_8, float CallFunc_BreakHitResult_Time_8, float CallFunc_BreakHitResult_Distance_8, const struct FVector& CallFunc_BreakHitResult_Location_8, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_8, const struct FVector& CallFunc_BreakHitResult_Normal_8, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_8, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_8, class AActor* CallFunc_BreakHitResult_HitActor_8, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_8, class FName CallFunc_BreakHitResult_HitBoneName_8, int32 CallFunc_BreakHitResult_HitItem_8, int32 CallFunc_BreakHitResult_FaceIndex_8, const struct FVector& CallFunc_BreakHitResult_TraceStart_8, const struct FVector& CallFunc_BreakHitResult_TraceEnd_8, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, TScriptInterface<class ICharacterRagdollInterface_C> K2Node_DynamicCast_AsCharacter_Ragdoll_Interface, bool K2Node_DynamicCast_bSuccess_42, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_CalculateFacingDirection_IsFacingUp_, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, TScriptInterface<class ICharacterRagdollInterface_C> K2Node_DynamicCast_AsCharacter_Ragdoll_Interface_1, bool K2Node_DynamicCast_bSuccess_43, TScriptInterface<class ICharacterRagdollInterface_C> K2Node_DynamicCast_AsCharacter_Ragdoll_Interface_2, bool K2Node_DynamicCast_bSuccess_44, bool CallFunc_DoesImplementInterface_ReturnValue_1, float K2Node_CustomEvent_BaseStaggerDuration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_14, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAnimMontage* K2Node_CustomEvent_ActiveRagdollMontage, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_24, bool K2Node_CustomEvent_Simulate_, class FName K2Node_CustomEvent_BelowBone, bool CallFunc_Not_PreBool_ReturnValue_15, class FName K2Node_CustomEvent_NotifyName_36, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, float K2Node_Event_DeltaSeconds, class AZero_Base_C* K2Node_DynamicCast_As0_Base_12, bool K2Node_DynamicCast_bSuccess_45, bool CallFunc_Not_PreBool_ReturnValue_16, float CallFunc_ApplyDamage_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_54, float CallFunc_ApplyDamage_ReturnValue_5, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_2, TArray<class AActor*>& K2Node_MakeArray_Array_3, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_9, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_37, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit_1, bool CallFunc_SphereTraceSingleForObjects_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_9, bool CallFunc_BreakHitResult_bInitialOverlap_9, float CallFunc_BreakHitResult_Time_9, float CallFunc_BreakHitResult_Distance_9, const struct FVector& CallFunc_BreakHitResult_Location_9, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_9, const struct FVector& CallFunc_BreakHitResult_Normal_9, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_9, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_9, class AActor* CallFunc_BreakHitResult_HitActor_9, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_9, class FName CallFunc_BreakHitResult_HitBoneName_9, int32 CallFunc_BreakHitResult_HitItem_9, int32 CallFunc_BreakHitResult_FaceIndex_9, const struct FVector& CallFunc_BreakHitResult_TraceStart_9, const struct FVector& CallFunc_BreakHitResult_TraceEnd_9, float CallFunc_VSize_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue_6, bool CallFunc_Greater_FloatFloat_ReturnValue_4, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_9, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_5, float K2Node_Select_Default_6, class UBuffObject_C* K2Node_CustomEvent_BuffObject, float CallFunc_GetCapsuleRagdollVelocity_value, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_17, bool CallFunc_BooleanAND_ReturnValue_12, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_18, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_10, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class AGibExplosion_C* CallFunc_FinishSpawningActor_ReturnValue_2, class AGibExplosion_C* CallFunc_FinishSpawningActor_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_11, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_55, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class AGibExplosion_C* CallFunc_FinishSpawningActor_ReturnValue_4, bool CallFunc_HandleGetKickedCooldown_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_46, class FName K2Node_CustomEvent_NotifyName_38, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_56, class FName K2Node_CustomEvent_NotifyName_39, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_57, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_KickRune_1_Success_, class UBuffObject_C* K2Node_CustomEvent_BuffToStart, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1, bool K2Node_DynamicCast_bSuccess_47, class UClass* CallFunc_GetObjectClass_ReturnValue_3, class FName CallFunc_HandleKickRunes_KickRune, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, bool K2Node_SwitchName_CmpSuccess_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_7, const struct FVector& CallFunc_ProjectVectorOnToPlane_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_58, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_15, bool CallFunc_K2_SetActorRotation_ReturnValue, int32 Temp_int_Array_Index_Variable_6, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_15, bool K2Node_DynamicCast_bSuccess_48, class AZero_Base_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_12, class AActor* K2Node_Event_Kicker, const struct FVector& K2Node_Event_KickerLocation, const struct FVector& K2Node_Event_ImpactLocation, const struct FVector& K2Node_Event_Impulse, float K2Node_CustomEvent_Delay, float K2Node_CustomEvent_FreezeDuration_1, class UParticleSystem* Temp_object_Variable_1, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess_49, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, class UParticleSystem* Temp_object_Variable_2, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous_1, bool K2Node_DynamicCast_bSuccess_50, bool Temp_bool_Variable_8, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, class UParticleSystem* K2Node_Select_Default_7, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_8, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_6, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_5, class UParticleSystem* Temp_object_Variable_3, class UParticleSystem* Temp_object_Variable_4, float K2Node_CustomEvent_Duration, float CallFunc_Divide_FloatFloat_ReturnValue_2, bool Temp_bool_Variable_9, float Temp_float_Variable_3, class UParticleSystem* K2Node_Select_Default_8, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_9, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_13, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_14, float K2Node_CustomEvent_FreezeDuration, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_8, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_16, bool K2Node_DynamicCast_bSuccess_51, int32 CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_6, bool Temp_bool_Variable_10, float K2Node_Select_Default_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_59, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_16, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_19, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ExecuteUbergraph_BaseCharacter");

	Params::ABaseCharacter_C_ExecuteUbergraph_BaseCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_CustomEvent_EmitterTemplate_1 = K2Node_CustomEvent_EmitterTemplate_1;
	Parms.K2Node_CustomEvent_AttachToComponent = K2Node_CustomEvent_AttachToComponent;
	Parms.K2Node_CustomEvent_AttachPointName = K2Node_CustomEvent_AttachPointName;
	Parms.K2Node_CustomEvent_Location_8 = K2Node_CustomEvent_Location_8;
	Parms.K2Node_CustomEvent_Rotation_3 = K2Node_CustomEvent_Rotation_3;
	Parms.K2Node_CustomEvent_EmitterTemplate = K2Node_CustomEvent_EmitterTemplate;
	Parms.K2Node_CustomEvent_Location_7 = K2Node_CustomEvent_Location_7;
	Parms.K2Node_CustomEvent_Rotation_2 = K2Node_CustomEvent_Rotation_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.K2Node_CustomEvent_Location_6 = K2Node_CustomEvent_Location_6;
	Parms.K2Node_CustomEvent_HitActor_1 = K2Node_CustomEvent_HitActor_1;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_IsStoneFormDmgResOn_Yes = CallFunc_IsStoneFormDmgResOn_Yes;
	Parms.K2Node_CustomEvent_LocationTeleportedTo = K2Node_CustomEvent_LocationTeleportedTo;
	Parms.K2Node_CustomEvent_LocationTeleportedFrom = K2Node_CustomEvent_LocationTeleportedFrom;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.K2Node_CustomEvent_ImpactLocation = K2Node_CustomEvent_ImpactLocation;
	Parms.K2Node_CustomEvent_HitActor = K2Node_CustomEvent_HitActor;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Duration_10 = K2Node_CustomEvent_Duration_10;
	Parms.K2Node_CustomEvent_Duration_9 = K2Node_CustomEvent_Duration_9;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_CustomEvent_DelayBeforeStart_1 = K2Node_CustomEvent_DelayBeforeStart_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetBuffFromClass_BuffObject = CallFunc_GetBuffFromClass_BuffObject;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBuff_Object_Decrease_Stamina_Reg = K2Node_DynamicCast_AsBuff_Object_Decrease_Stamina_Reg;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Instigator = K2Node_CustomEvent_Instigator;
	Parms.K2Node_CustomEvent_Duration_8 = K2Node_CustomEvent_Duration_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetBuffFromClass_BuffObject_1 = CallFunc_GetBuffFromClass_BuffObject_1;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBuff_Object_Poison_DPS = K2Node_DynamicCast_AsBuff_Object_Poison_DPS;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CustomEvent_DmgPerSec_1 = K2Node_CustomEvent_DmgPerSec_1;
	Parms.K2Node_CustomEvent_Duration_7 = K2Node_CustomEvent_Duration_7;
	Parms.K2Node_CustomEvent_DPSApplyFrequency = K2Node_CustomEvent_DPSApplyFrequency;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetBuffFromClass_BuffObject_2 = CallFunc_GetBuffFromClass_BuffObject_2;
	Parms.CallFunc_SpawnObject_ReturnValue_2 = CallFunc_SpawnObject_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBuff_Object_Fire_DPS = K2Node_DynamicCast_AsBuff_Object_Fire_DPS;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CustomEvent_Duration_6 = K2Node_CustomEvent_Duration_6;
	Parms.K2Node_DynamicCast_AsDHCharacter_Movement_Component = K2Node_DynamicCast_AsDHCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsDHCharacter_Movement_Component_1 = K2Node_DynamicCast_AsDHCharacter_Movement_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.K2Node_CustomEvent_Duration_5 = K2Node_CustomEvent_Duration_5;
	Parms.K2Node_CustomEvent_DPSBurnInstigator = K2Node_CustomEvent_DPSBurnInstigator;
	Parms.K2Node_CustomEvent_DmgPerSec = K2Node_CustomEvent_DmgPerSec;
	Parms.K2Node_CustomEvent_Duration_4 = K2Node_CustomEvent_Duration_4;
	Parms.K2Node_CustomEvent_Duration_3 = K2Node_CustomEvent_Duration_3;
	Parms.K2Node_DynamicCast_AsEnemy_Character_1 = K2Node_DynamicCast_AsEnemy_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsEnemy_Character_2 = K2Node_DynamicCast_AsEnemy_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsEnemy_Character_3 = K2Node_DynamicCast_AsEnemy_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_Duration_2 = K2Node_CustomEvent_Duration_2;
	Parms.K2Node_CustomEvent_DelayBeforeStart = K2Node_CustomEvent_DelayBeforeStart;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_bInterrupted = K2Node_CustomEvent_bInterrupted;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_CustomEvent_Duration_1 = K2Node_CustomEvent_Duration_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_As0_Base_2 = K2Node_DynamicCast_As0_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_As0_Base_3 = K2Node_DynamicCast_As0_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_CustomEvent_ShockLocation = K2Node_CustomEvent_ShockLocation;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_2 = CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_CustomEvent_AudioComp = K2Node_CustomEvent_AudioComp;
	Parms.K2Node_CustomEvent_MeshComp = K2Node_CustomEvent_MeshComp;
	Parms.CallFunc_SphereTraceSingleForObjects_OutHit = CallFunc_SphereTraceSingleForObjects_OutHit;
	Parms.CallFunc_SphereTraceSingleForObjects_ReturnValue = CallFunc_SphereTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue_1 = CallFunc_ApplyDamage_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Timer = K2Node_CustomEvent_Timer;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_6 = CallFunc_K2_SetTimerDelegate_ReturnValue_6;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_2 = CallFunc_SpawnEmitterAttached_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_7 = CallFunc_K2_SetTimerDelegate_ReturnValue_7;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ApplyRadialDamage_ReturnValue = CallFunc_ApplyRadialDamage_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue_2 = CallFunc_ApplyDamage_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_InstigatingController = K2Node_CustomEvent_InstigatingController;
	Parms.CallFunc_HandleHardParryCooldown_ReturnValue = CallFunc_HandleHardParryCooldown_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_8 = CallFunc_K2_SetTimerDelegate_ReturnValue_8;
	Parms.K2Node_CustomEvent_Damage_1 = K2Node_CustomEvent_Damage_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.K2Node_CustomEvent_SourceActor = K2Node_CustomEvent_SourceActor;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetBloodDirectionForCurrentStrike_Dir = CallFunc_GetBloodDirectionForCurrentStrike_Dir;
	Parms.CallFunc_GetBloodDirectionForCurrentStrike_bSet = CallFunc_GetBloodDirectionForCurrentStrike_bSet;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BreakRotIntoAxes_X = CallFunc_BreakRotIntoAxes_X;
	Parms.CallFunc_BreakRotIntoAxes_Y = CallFunc_BreakRotIntoAxes_Y;
	Parms.CallFunc_BreakRotIntoAxes_Z = CallFunc_BreakRotIntoAxes_Z;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeRotationFromAxes_ReturnValue = CallFunc_MakeRotationFromAxes_ReturnValue;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue_1 = CallFunc_GetCurrentPersistentLevelName_ReturnValue_1;
	Parms.K2Node_CustomEvent_Location_5 = K2Node_CustomEvent_Location_5;
	Parms.K2Node_CustomEvent_Rotation_1 = K2Node_CustomEvent_Rotation_1;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_MeshSphereTrace_ReturnValue = CallFunc_MeshSphereTrace_ReturnValue;
	Parms.CallFunc_MeshSphereTrace_OutHit = CallFunc_MeshSphereTrace_OutHit;
	Parms.CallFunc_BreakHitResult_bBlockingHit_3 = CallFunc_BreakHitResult_bBlockingHit_3;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_3 = CallFunc_BreakHitResult_bInitialOverlap_3;
	Parms.CallFunc_BreakHitResult_Time_3 = CallFunc_BreakHitResult_Time_3;
	Parms.CallFunc_BreakHitResult_Distance_3 = CallFunc_BreakHitResult_Distance_3;
	Parms.CallFunc_BreakHitResult_Location_3 = CallFunc_BreakHitResult_Location_3;
	Parms.CallFunc_BreakHitResult_ImpactPoint_3 = CallFunc_BreakHitResult_ImpactPoint_3;
	Parms.CallFunc_BreakHitResult_Normal_3 = CallFunc_BreakHitResult_Normal_3;
	Parms.CallFunc_BreakHitResult_ImpactNormal_3 = CallFunc_BreakHitResult_ImpactNormal_3;
	Parms.CallFunc_BreakHitResult_PhysMat_3 = CallFunc_BreakHitResult_PhysMat_3;
	Parms.CallFunc_BreakHitResult_HitActor_3 = CallFunc_BreakHitResult_HitActor_3;
	Parms.CallFunc_BreakHitResult_HitComponent_3 = CallFunc_BreakHitResult_HitComponent_3;
	Parms.CallFunc_BreakHitResult_HitBoneName_3 = CallFunc_BreakHitResult_HitBoneName_3;
	Parms.CallFunc_BreakHitResult_HitItem_3 = CallFunc_BreakHitResult_HitItem_3;
	Parms.CallFunc_BreakHitResult_FaceIndex_3 = CallFunc_BreakHitResult_FaceIndex_3;
	Parms.CallFunc_BreakHitResult_TraceStart_3 = CallFunc_BreakHitResult_TraceStart_3;
	Parms.CallFunc_BreakHitResult_TraceEnd_3 = CallFunc_BreakHitResult_TraceEnd_3;
	Parms.CallFunc_GetBloodSpawnScale_ReturnValue = CallFunc_GetBloodSpawnScale_ReturnValue;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_GetHeadBoneLocation_ReturnValue = CallFunc_GetHeadBoneLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_3 = CallFunc_SpawnEmitterAtLocation_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_9 = CallFunc_K2_SetTimerDelegate_ReturnValue_9;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_DynamicCast_As0_Base_4 = K2Node_DynamicCast_As0_Base_4;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base_5 = K2Node_DynamicCast_As0_Base_5;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_CustomEvent_NotifyFired = K2Node_CustomEvent_NotifyFired;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsEnemy_Character_4 = K2Node_DynamicCast_AsEnemy_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.K2Node_DynamicCast_AsBoss_Base_Character = K2Node_DynamicCast_AsBoss_Base_Character;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.K2Node_CustomEvent_ResetBossStaggerCD = K2Node_CustomEvent_ResetBossStaggerCD;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_36 = K2Node_CreateDelegate_OutputDelegate_36;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_37 = K2Node_CreateDelegate_OutputDelegate_37;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_CustomEvent_EventName_1 = K2Node_CustomEvent_EventName_1;
	Parms.K2Node_CustomEvent_EmitterTime_1 = K2Node_CustomEvent_EmitterTime_1;
	Parms.K2Node_CustomEvent_ParticleTime_1 = K2Node_CustomEvent_ParticleTime_1;
	Parms.K2Node_CustomEvent_Location_4 = K2Node_CustomEvent_Location_4;
	Parms.K2Node_CustomEvent_Velocity_1 = K2Node_CustomEvent_Velocity_1;
	Parms.K2Node_CustomEvent_Direction_1 = K2Node_CustomEvent_Direction_1;
	Parms.K2Node_CustomEvent_Normal_1 = K2Node_CustomEvent_Normal_1;
	Parms.K2Node_CustomEvent_BoneName_1 = K2Node_CustomEvent_BoneName_1;
	Parms.K2Node_CustomEvent_PhysMat_1 = K2Node_CustomEvent_PhysMat_1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.K2Node_CreateDelegate_OutputDelegate_38 = K2Node_CreateDelegate_OutputDelegate_38;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsEnemy_Character_5 = K2Node_DynamicCast_AsEnemy_Character_5;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_2 = CallFunc_GetObjectClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetWeaponMesh_WeaponMesh = CallFunc_GetWeaponMesh_WeaponMesh;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_DynamicCast_AsEnemy_Character_6 = K2Node_DynamicCast_AsEnemy_Character_6;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.K2Node_DynamicCast_AsEnemy_Character_7 = K2Node_DynamicCast_AsEnemy_Character_7;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.K2Node_DynamicCast_AsEnemy_Character_8 = K2Node_DynamicCast_AsEnemy_Character_8;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.K2Node_DynamicCast_AsEnemy_Character_9 = K2Node_DynamicCast_AsEnemy_Character_9;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_39 = K2Node_CreateDelegate_OutputDelegate_39;
	Parms.K2Node_CustomEvent_RiposteWeapon = K2Node_CustomEvent_RiposteWeapon;
	Parms.K2Node_CustomEvent_RipostePowerType = K2Node_CustomEvent_RipostePowerType;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_ActorToHit = K2Node_CustomEvent_ActorToHit;
	Parms.K2Node_CustomEvent_ShouldProcStoneForm_ = K2Node_CustomEvent_ShouldProcStoneForm_;
	Parms.K2Node_DynamicCast_AsBase_Character_1 = K2Node_DynamicCast_AsBase_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue_3 = CallFunc_ApplyDamage_ReturnValue_3;
	Parms.K2Node_DynamicCast_As0_Base_6 = K2Node_DynamicCast_As0_Base_6;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_GetActorName_ReturnValue = CallFunc_GetActorName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character_10 = K2Node_DynamicCast_AsEnemy_Character_10;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_10 = CallFunc_K2_SetTimerDelegate_ReturnValue_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_11 = CallFunc_K2_SetTimerDelegate_ReturnValue_11;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_PoiseDamage_1 = K2Node_CustomEvent_PoiseDamage_1;
	Parms.K2Node_CustomEvent_HeavyHitReaction_ = K2Node_CustomEvent_HeavyHitReaction_;
	Parms.K2Node_CustomEvent_HitIgnoresPoiseDamageCooldown__1 = K2Node_CustomEvent_HitIgnoresPoiseDamageCooldown__1;
	Parms.K2Node_CustomEvent_ResetsBossStaggerCooldown_ = K2Node_CustomEvent_ResetsBossStaggerCooldown_;
	Parms.K2Node_CustomEvent_IsFromStoneFormDeflection_ = K2Node_CustomEvent_IsFromStoneFormDeflection_;
	Parms.K2Node_CustomEvent_DirectionToSource_1 = K2Node_CustomEvent_DirectionToSource_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.K2Node_DynamicCast_AsBase_Character_2 = K2Node_DynamicCast_AsBase_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_40 = K2Node_CreateDelegate_OutputDelegate_40;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_DynamicCast_AsEnemy_Character_11 = K2Node_DynamicCast_AsEnemy_Character_11;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.K2Node_CustomEvent_DirectionToSource = K2Node_CustomEvent_DirectionToSource;
	Parms.K2Node_CustomEvent_CallChildFunction_ = K2Node_CustomEvent_CallChildFunction_;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.K2Node_CustomEvent_ParriedChar = K2Node_CustomEvent_ParriedChar;
	Parms.K2Node_DynamicCast_As0_Base_7 = K2Node_DynamicCast_As0_Base_7;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.CallFunc_CheckForHardParry_ReturnValue = CallFunc_CheckForHardParry_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue_1 = CallFunc_GetInstigatorController_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_ApplyPointDamage_ReturnValue = CallFunc_ApplyPointDamage_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character_12 = K2Node_DynamicCast_AsEnemy_Character_12;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.CallFunc_GetWeaponMesh_WeaponMesh_1 = CallFunc_GetWeaponMesh_WeaponMesh_1;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_DamageToApply = K2Node_CustomEvent_DamageToApply;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_4 = CallFunc_BreakHitResult_bBlockingHit_4;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_4 = CallFunc_BreakHitResult_bInitialOverlap_4;
	Parms.CallFunc_BreakHitResult_Time_4 = CallFunc_BreakHitResult_Time_4;
	Parms.CallFunc_BreakHitResult_Distance_4 = CallFunc_BreakHitResult_Distance_4;
	Parms.CallFunc_BreakHitResult_Location_4 = CallFunc_BreakHitResult_Location_4;
	Parms.CallFunc_BreakHitResult_ImpactPoint_4 = CallFunc_BreakHitResult_ImpactPoint_4;
	Parms.CallFunc_BreakHitResult_Normal_4 = CallFunc_BreakHitResult_Normal_4;
	Parms.CallFunc_BreakHitResult_ImpactNormal_4 = CallFunc_BreakHitResult_ImpactNormal_4;
	Parms.CallFunc_BreakHitResult_PhysMat_4 = CallFunc_BreakHitResult_PhysMat_4;
	Parms.CallFunc_BreakHitResult_HitActor_4 = CallFunc_BreakHitResult_HitActor_4;
	Parms.CallFunc_BreakHitResult_HitComponent_4 = CallFunc_BreakHitResult_HitComponent_4;
	Parms.CallFunc_BreakHitResult_HitBoneName_4 = CallFunc_BreakHitResult_HitBoneName_4;
	Parms.CallFunc_BreakHitResult_HitItem_4 = CallFunc_BreakHitResult_HitItem_4;
	Parms.CallFunc_BreakHitResult_FaceIndex_4 = CallFunc_BreakHitResult_FaceIndex_4;
	Parms.CallFunc_BreakHitResult_TraceStart_4 = CallFunc_BreakHitResult_TraceStart_4;
	Parms.CallFunc_BreakHitResult_TraceEnd_4 = CallFunc_BreakHitResult_TraceEnd_4;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character_3 = K2Node_DynamicCast_AsBase_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.CallFunc_GetResolveMultiplierOnBeingHit_Multiplier = CallFunc_GetResolveMultiplierOnBeingHit_Multiplier;
	Parms.CallFunc_DirectionTo2D_Dir = CallFunc_DirectionTo2D_Dir;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CustomEvent_Location_3 = K2Node_CustomEvent_Location_3;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_4 = CallFunc_SpawnEmitterAtLocation_ReturnValue_4;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_5 = CallFunc_SpawnEmitterAtLocation_ReturnValue_5;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_6 = CallFunc_SpawnEmitterAtLocation_ReturnValue_6;
	Parms.K2Node_DynamicCast_As0_Base_8 = K2Node_DynamicCast_As0_Base_8;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_EmitterTime = K2Node_CustomEvent_EmitterTime;
	Parms.K2Node_CustomEvent_ParticleTime = K2Node_CustomEvent_ParticleTime;
	Parms.K2Node_CustomEvent_Location_2 = K2Node_CustomEvent_Location_2;
	Parms.K2Node_CustomEvent_Velocity = K2Node_CustomEvent_Velocity;
	Parms.K2Node_CustomEvent_Direction = K2Node_CustomEvent_Direction;
	Parms.K2Node_CustomEvent_Normal = K2Node_CustomEvent_Normal;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_PhysMat = K2Node_CustomEvent_PhysMat;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsGodMode__IsGodMode_ = CallFunc_IsGodMode__IsGodMode_;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetDamage_Damage = CallFunc_GetDamage_Damage;
	Parms.CallFunc_ApplyPointDamage_ReturnValue_1 = CallFunc_ApplyPointDamage_ReturnValue_1;
	Parms.K2Node_CustomEvent_HItResults = K2Node_CustomEvent_HItResults;
	Parms.K2Node_CustomEvent_PushAmount = K2Node_CustomEvent_PushAmount;
	Parms.K2Node_CustomEvent_ShouldVictimRagdoll_ = K2Node_CustomEvent_ShouldVictimRagdoll_;
	Parms.K2Node_CustomEvent_ShouldVictimHeavyStagger_ = K2Node_CustomEvent_ShouldVictimHeavyStagger_;
	Parms.K2Node_CustomEvent_PoiseDamage = K2Node_CustomEvent_PoiseDamage;
	Parms.K2Node_CustomEvent_HitIgnoresPoiseDamageCooldown_ = K2Node_CustomEvent_HitIgnoresPoiseDamageCooldown_;
	Parms.K2Node_CustomEvent_DamageMultiplier = K2Node_CustomEvent_DamageMultiplier;
	Parms.K2Node_CustomEvent_PlayerHitReactionType = K2Node_CustomEvent_PlayerHitReactionType;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_OptionalSocketOverride = K2Node_CustomEvent_OptionalSocketOverride;
	Parms.K2Node_CustomEvent_ApplyImpulseToRagdoll_ = K2Node_CustomEvent_ApplyImpulseToRagdoll_;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_CalcPoiseDamage_PoiseOut = CallFunc_CalcPoiseDamage_PoiseOut;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_BreakHitResult_bBlockingHit_5 = CallFunc_BreakHitResult_bBlockingHit_5;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_5 = CallFunc_BreakHitResult_bInitialOverlap_5;
	Parms.CallFunc_BreakHitResult_Time_5 = CallFunc_BreakHitResult_Time_5;
	Parms.CallFunc_BreakHitResult_Distance_5 = CallFunc_BreakHitResult_Distance_5;
	Parms.CallFunc_BreakHitResult_Location_5 = CallFunc_BreakHitResult_Location_5;
	Parms.CallFunc_BreakHitResult_ImpactPoint_5 = CallFunc_BreakHitResult_ImpactPoint_5;
	Parms.CallFunc_BreakHitResult_Normal_5 = CallFunc_BreakHitResult_Normal_5;
	Parms.CallFunc_BreakHitResult_ImpactNormal_5 = CallFunc_BreakHitResult_ImpactNormal_5;
	Parms.CallFunc_BreakHitResult_PhysMat_5 = CallFunc_BreakHitResult_PhysMat_5;
	Parms.CallFunc_BreakHitResult_HitActor_5 = CallFunc_BreakHitResult_HitActor_5;
	Parms.CallFunc_BreakHitResult_HitComponent_5 = CallFunc_BreakHitResult_HitComponent_5;
	Parms.CallFunc_BreakHitResult_HitBoneName_5 = CallFunc_BreakHitResult_HitBoneName_5;
	Parms.CallFunc_BreakHitResult_HitItem_5 = CallFunc_BreakHitResult_HitItem_5;
	Parms.CallFunc_BreakHitResult_FaceIndex_5 = CallFunc_BreakHitResult_FaceIndex_5;
	Parms.CallFunc_BreakHitResult_TraceStart_5 = CallFunc_BreakHitResult_TraceStart_5;
	Parms.CallFunc_BreakHitResult_TraceEnd_5 = CallFunc_BreakHitResult_TraceEnd_5;
	Parms.K2Node_DynamicCast_AsBase_Character_4 = K2Node_DynamicCast_AsBase_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_32 = K2Node_DynamicCast_bSuccess_32;
	Parms.K2Node_CreateDelegate_OutputDelegate_41 = K2Node_CreateDelegate_OutputDelegate_41;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_12 = CallFunc_K2_SetTimerDelegate_ReturnValue_12;
	Parms.CallFunc_GetBoostedDmgAgainstActor_BoostedDmg = CallFunc_GetBoostedDmgAgainstActor_BoostedDmg;
	Parms.K2Node_DynamicCast_AsBase_Character_5 = K2Node_DynamicCast_AsBase_Character_5;
	Parms.K2Node_DynamicCast_bSuccess_33 = K2Node_DynamicCast_bSuccess_33;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_IsUsingCatehdralPower__IsUsingCatedralPower_ = CallFunc_IsUsingCatehdralPower__IsUsingCatedralPower_;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetIsInvulnerable_IsInvulnerable_ = CallFunc_GetIsInvulnerable_IsInvulnerable_;
	Parms.CallFunc_GetIsBlocking_IsBlocking = CallFunc_GetIsBlocking_IsBlocking;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_42 = K2Node_CreateDelegate_OutputDelegate_42;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_13 = CallFunc_K2_SetTimerDelegate_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsEnemy_Character_13 = K2Node_DynamicCast_AsEnemy_Character_13;
	Parms.K2Node_DynamicCast_bSuccess_34 = K2Node_DynamicCast_bSuccess_34;
	Parms.CallFunc_BreakHitResult_bBlockingHit_6 = CallFunc_BreakHitResult_bBlockingHit_6;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_6 = CallFunc_BreakHitResult_bInitialOverlap_6;
	Parms.CallFunc_BreakHitResult_Time_6 = CallFunc_BreakHitResult_Time_6;
	Parms.CallFunc_BreakHitResult_Distance_6 = CallFunc_BreakHitResult_Distance_6;
	Parms.CallFunc_BreakHitResult_Location_6 = CallFunc_BreakHitResult_Location_6;
	Parms.CallFunc_BreakHitResult_ImpactPoint_6 = CallFunc_BreakHitResult_ImpactPoint_6;
	Parms.CallFunc_BreakHitResult_Normal_6 = CallFunc_BreakHitResult_Normal_6;
	Parms.CallFunc_BreakHitResult_ImpactNormal_6 = CallFunc_BreakHitResult_ImpactNormal_6;
	Parms.CallFunc_BreakHitResult_PhysMat_6 = CallFunc_BreakHitResult_PhysMat_6;
	Parms.CallFunc_BreakHitResult_HitActor_6 = CallFunc_BreakHitResult_HitActor_6;
	Parms.CallFunc_BreakHitResult_HitComponent_6 = CallFunc_BreakHitResult_HitComponent_6;
	Parms.CallFunc_BreakHitResult_HitBoneName_6 = CallFunc_BreakHitResult_HitBoneName_6;
	Parms.CallFunc_BreakHitResult_HitItem_6 = CallFunc_BreakHitResult_HitItem_6;
	Parms.CallFunc_BreakHitResult_FaceIndex_6 = CallFunc_BreakHitResult_FaceIndex_6;
	Parms.CallFunc_BreakHitResult_TraceStart_6 = CallFunc_BreakHitResult_TraceStart_6;
	Parms.CallFunc_BreakHitResult_TraceEnd_6 = CallFunc_BreakHitResult_TraceEnd_6;
	Parms.K2Node_DynamicCast_AsBase_Character_6 = K2Node_DynamicCast_AsBase_Character_6;
	Parms.K2Node_DynamicCast_bSuccess_35 = K2Node_DynamicCast_bSuccess_35;
	Parms.CallFunc_MakeRotFromZ_ReturnValue_1 = CallFunc_MakeRotFromZ_ReturnValue_1;
	Parms.K2Node_DynamicCast_As0_Base_9 = K2Node_DynamicCast_As0_Base_9;
	Parms.K2Node_DynamicCast_bSuccess_36 = K2Node_DynamicCast_bSuccess_36;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.K2Node_DynamicCast_As0_Base_10 = K2Node_DynamicCast_As0_Base_10;
	Parms.K2Node_DynamicCast_bSuccess_37 = K2Node_DynamicCast_bSuccess_37;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_38 = K2Node_DynamicCast_bSuccess_38;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_43 = K2Node_CreateDelegate_OutputDelegate_43;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.K2Node_DynamicCast_AsEnemy_Character_14 = K2Node_DynamicCast_AsEnemy_Character_14;
	Parms.K2Node_DynamicCast_bSuccess_39 = K2Node_DynamicCast_bSuccess_39;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_Handle_Knockdown_Resistance_Ragdoll_ = CallFunc_Handle_Knockdown_Resistance_Ragdoll_;
	Parms.CallFunc_Handle_Knockdown_Resistance_Ragdoll__1 = CallFunc_Handle_Knockdown_Resistance_Ragdoll__1;
	Parms.K2Node_CreateDelegate_OutputDelegate_44 = K2Node_CreateDelegate_OutputDelegate_44;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_45 = K2Node_CreateDelegate_OutputDelegate_45;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_46 = K2Node_CreateDelegate_OutputDelegate_46;
	Parms.CallFunc_ApplyFallDamage_ReturnValue = CallFunc_ApplyFallDamage_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_ApplyFallDamage_ReturnValue_1 = CallFunc_ApplyFallDamage_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_3 = CallFunc_SpawnEmitterAttached_ReturnValue_3;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base_11 = K2Node_DynamicCast_As0_Base_11;
	Parms.K2Node_DynamicCast_bSuccess_40 = K2Node_DynamicCast_bSuccess_40;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_ShouldApplyFallDamage_ReturnValue = CallFunc_ShouldApplyFallDamage_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_CustomEvent_NotifyName_30 = K2Node_CustomEvent_NotifyName_30;
	Parms.K2Node_CreateDelegate_OutputDelegate_47 = K2Node_CreateDelegate_OutputDelegate_47;
	Parms.K2Node_CustomEvent_NotifyName_31 = K2Node_CustomEvent_NotifyName_31;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_48 = K2Node_CreateDelegate_OutputDelegate_48;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.K2Node_CustomEvent_NotifyName_32 = K2Node_CustomEvent_NotifyName_32;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_6 = CallFunc_K2_GetActorLocation_ReturnValue_6;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_CreateDelegate_OutputDelegate_49 = K2Node_CreateDelegate_OutputDelegate_49;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.K2Node_CustomEvent_NotifyName_33 = K2Node_CustomEvent_NotifyName_33;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDmgEffectFromClass_DmgEffect = CallFunc_GetDmgEffectFromClass_DmgEffect;
	Parms.K2Node_CreateDelegate_OutputDelegate_50 = K2Node_CreateDelegate_OutputDelegate_50;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.K2Node_CustomEvent_Rotation = K2Node_CustomEvent_Rotation;
	Parms.K2Node_CustomEvent_bPlayScreenShakeAndForceFeedback = K2Node_CustomEvent_bPlayScreenShakeAndForceFeedback;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_7 = CallFunc_SpawnEmitterAtLocation_ReturnValue_7;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_34 = K2Node_CustomEvent_NotifyName_34;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_51 = K2Node_CreateDelegate_OutputDelegate_51;
	Parms.CallFunc_GetPhysicsLinearVelocity_ReturnValue = CallFunc_GetPhysicsLinearVelocity_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_52 = K2Node_CreateDelegate_OutputDelegate_52;
	Parms.K2Node_CustomEvent_ActiveRagdollMontage_1 = K2Node_CustomEvent_ActiveRagdollMontage_1;
	Parms.K2Node_CustomEvent_Impulse = K2Node_CustomEvent_Impulse;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Bone = K2Node_CustomEvent_Bone;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_PrevMovementMode = K2Node_CustomEvent_PrevMovementMode;
	Parms.K2Node_CustomEvent_PreviousCustomMode = K2Node_CustomEvent_PreviousCustomMode;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_7 = CallFunc_K2_GetActorLocation_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_8 = CallFunc_K2_GetActorLocation_ReturnValue_8;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_4 = CallFunc_Subtract_FloatFloat_ReturnValue_4;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_HitComponent = K2Node_ComponentBoundEvent_HitComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_NormalImpulse = K2Node_ComponentBoundEvent_NormalImpulse;
	Parms.K2Node_ComponentBoundEvent_Hit = K2Node_ComponentBoundEvent_Hit;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_BreakHitResult_bBlockingHit_7 = CallFunc_BreakHitResult_bBlockingHit_7;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_7 = CallFunc_BreakHitResult_bInitialOverlap_7;
	Parms.CallFunc_BreakHitResult_Time_7 = CallFunc_BreakHitResult_Time_7;
	Parms.CallFunc_BreakHitResult_Distance_7 = CallFunc_BreakHitResult_Distance_7;
	Parms.CallFunc_BreakHitResult_Location_7 = CallFunc_BreakHitResult_Location_7;
	Parms.CallFunc_BreakHitResult_ImpactPoint_7 = CallFunc_BreakHitResult_ImpactPoint_7;
	Parms.CallFunc_BreakHitResult_Normal_7 = CallFunc_BreakHitResult_Normal_7;
	Parms.CallFunc_BreakHitResult_ImpactNormal_7 = CallFunc_BreakHitResult_ImpactNormal_7;
	Parms.CallFunc_BreakHitResult_PhysMat_7 = CallFunc_BreakHitResult_PhysMat_7;
	Parms.CallFunc_BreakHitResult_HitActor_7 = CallFunc_BreakHitResult_HitActor_7;
	Parms.CallFunc_BreakHitResult_HitComponent_7 = CallFunc_BreakHitResult_HitComponent_7;
	Parms.CallFunc_BreakHitResult_HitBoneName_7 = CallFunc_BreakHitResult_HitBoneName_7;
	Parms.CallFunc_BreakHitResult_HitItem_7 = CallFunc_BreakHitResult_HitItem_7;
	Parms.CallFunc_BreakHitResult_FaceIndex_7 = CallFunc_BreakHitResult_FaceIndex_7;
	Parms.CallFunc_BreakHitResult_TraceStart_7 = CallFunc_BreakHitResult_TraceStart_7;
	Parms.CallFunc_BreakHitResult_TraceEnd_7 = CallFunc_BreakHitResult_TraceEnd_7;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_MakeRotFromZ_ReturnValue_2 = CallFunc_MakeRotFromZ_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_35 = K2Node_CustomEvent_NotifyName_35;
	Parms.K2Node_CreateDelegate_OutputDelegate_53 = K2Node_CreateDelegate_OutputDelegate_53;
	Parms.K2Node_DynamicCast_AsBase_Character_7 = K2Node_DynamicCast_AsBase_Character_7;
	Parms.K2Node_DynamicCast_bSuccess_41 = K2Node_DynamicCast_bSuccess_41;
	Parms.CallFunc_Not_PreBool_ReturnValue_14 = CallFunc_Not_PreBool_ReturnValue_14;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_8 = CallFunc_BreakHitResult_bBlockingHit_8;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_8 = CallFunc_BreakHitResult_bInitialOverlap_8;
	Parms.CallFunc_BreakHitResult_Time_8 = CallFunc_BreakHitResult_Time_8;
	Parms.CallFunc_BreakHitResult_Distance_8 = CallFunc_BreakHitResult_Distance_8;
	Parms.CallFunc_BreakHitResult_Location_8 = CallFunc_BreakHitResult_Location_8;
	Parms.CallFunc_BreakHitResult_ImpactPoint_8 = CallFunc_BreakHitResult_ImpactPoint_8;
	Parms.CallFunc_BreakHitResult_Normal_8 = CallFunc_BreakHitResult_Normal_8;
	Parms.CallFunc_BreakHitResult_ImpactNormal_8 = CallFunc_BreakHitResult_ImpactNormal_8;
	Parms.CallFunc_BreakHitResult_PhysMat_8 = CallFunc_BreakHitResult_PhysMat_8;
	Parms.CallFunc_BreakHitResult_HitActor_8 = CallFunc_BreakHitResult_HitActor_8;
	Parms.CallFunc_BreakHitResult_HitComponent_8 = CallFunc_BreakHitResult_HitComponent_8;
	Parms.CallFunc_BreakHitResult_HitBoneName_8 = CallFunc_BreakHitResult_HitBoneName_8;
	Parms.CallFunc_BreakHitResult_HitItem_8 = CallFunc_BreakHitResult_HitItem_8;
	Parms.CallFunc_BreakHitResult_FaceIndex_8 = CallFunc_BreakHitResult_FaceIndex_8;
	Parms.CallFunc_BreakHitResult_TraceStart_8 = CallFunc_BreakHitResult_TraceStart_8;
	Parms.CallFunc_BreakHitResult_TraceEnd_8 = CallFunc_BreakHitResult_TraceEnd_8;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue_3 = CallFunc_GetAnimInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsCharacter_Ragdoll_Interface = K2Node_DynamicCast_AsCharacter_Ragdoll_Interface;
	Parms.K2Node_DynamicCast_bSuccess_42 = K2Node_DynamicCast_bSuccess_42;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_CalculateFacingDirection_IsFacingUp_ = CallFunc_CalculateFacingDirection_IsFacingUp_;
	Parms.CallFunc_GetAnimInstance_ReturnValue_4 = CallFunc_GetAnimInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsCharacter_Ragdoll_Interface_1 = K2Node_DynamicCast_AsCharacter_Ragdoll_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_43 = K2Node_DynamicCast_bSuccess_43;
	Parms.K2Node_DynamicCast_AsCharacter_Ragdoll_Interface_2 = K2Node_DynamicCast_AsCharacter_Ragdoll_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_44 = K2Node_DynamicCast_bSuccess_44;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_1 = CallFunc_DoesImplementInterface_ReturnValue_1;
	Parms.K2Node_CustomEvent_BaseStaggerDuration = K2Node_CustomEvent_BaseStaggerDuration;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_14 = CallFunc_K2_SetTimerDelegate_ReturnValue_14;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.K2Node_CustomEvent_ActiveRagdollMontage = K2Node_CustomEvent_ActiveRagdollMontage;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.K2Node_CustomEvent_Simulate_ = K2Node_CustomEvent_Simulate_;
	Parms.K2Node_CustomEvent_BelowBone = K2Node_CustomEvent_BelowBone;
	Parms.CallFunc_Not_PreBool_ReturnValue_15 = CallFunc_Not_PreBool_ReturnValue_15;
	Parms.K2Node_CustomEvent_NotifyName_36 = K2Node_CustomEvent_NotifyName_36;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsSimulatingPhysics_ReturnValue = CallFunc_IsSimulatingPhysics_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_As0_Base_12 = K2Node_DynamicCast_As0_Base_12;
	Parms.K2Node_DynamicCast_bSuccess_45 = K2Node_DynamicCast_bSuccess_45;
	Parms.CallFunc_Not_PreBool_ReturnValue_16 = CallFunc_Not_PreBool_ReturnValue_16;
	Parms.CallFunc_ApplyDamage_ReturnValue_4 = CallFunc_ApplyDamage_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_54 = K2Node_CreateDelegate_OutputDelegate_54;
	Parms.CallFunc_ApplyDamage_ReturnValue_5 = CallFunc_ApplyDamage_ReturnValue_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_9 = CallFunc_K2_GetActorLocation_ReturnValue_9;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.K2Node_CustomEvent_NotifyName_37 = K2Node_CustomEvent_NotifyName_37;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_SphereTraceSingleForObjects_OutHit_1 = CallFunc_SphereTraceSingleForObjects_OutHit_1;
	Parms.CallFunc_SphereTraceSingleForObjects_ReturnValue_1 = CallFunc_SphereTraceSingleForObjects_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit_9 = CallFunc_BreakHitResult_bBlockingHit_9;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_9 = CallFunc_BreakHitResult_bInitialOverlap_9;
	Parms.CallFunc_BreakHitResult_Time_9 = CallFunc_BreakHitResult_Time_9;
	Parms.CallFunc_BreakHitResult_Distance_9 = CallFunc_BreakHitResult_Distance_9;
	Parms.CallFunc_BreakHitResult_Location_9 = CallFunc_BreakHitResult_Location_9;
	Parms.CallFunc_BreakHitResult_ImpactPoint_9 = CallFunc_BreakHitResult_ImpactPoint_9;
	Parms.CallFunc_BreakHitResult_Normal_9 = CallFunc_BreakHitResult_Normal_9;
	Parms.CallFunc_BreakHitResult_ImpactNormal_9 = CallFunc_BreakHitResult_ImpactNormal_9;
	Parms.CallFunc_BreakHitResult_PhysMat_9 = CallFunc_BreakHitResult_PhysMat_9;
	Parms.CallFunc_BreakHitResult_HitActor_9 = CallFunc_BreakHitResult_HitActor_9;
	Parms.CallFunc_BreakHitResult_HitComponent_9 = CallFunc_BreakHitResult_HitComponent_9;
	Parms.CallFunc_BreakHitResult_HitBoneName_9 = CallFunc_BreakHitResult_HitBoneName_9;
	Parms.CallFunc_BreakHitResult_HitItem_9 = CallFunc_BreakHitResult_HitItem_9;
	Parms.CallFunc_BreakHitResult_FaceIndex_9 = CallFunc_BreakHitResult_FaceIndex_9;
	Parms.CallFunc_BreakHitResult_TraceStart_9 = CallFunc_BreakHitResult_TraceStart_9;
	Parms.CallFunc_BreakHitResult_TraceEnd_9 = CallFunc_BreakHitResult_TraceEnd_9;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_ApplyDamage_ReturnValue_6 = CallFunc_ApplyDamage_ReturnValue_6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_GetAnimInstance_ReturnValue_5 = CallFunc_GetAnimInstance_ReturnValue_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_CustomEvent_BuffObject = K2Node_CustomEvent_BuffObject;
	Parms.CallFunc_GetCapsuleRagdollVelocity_value = CallFunc_GetCapsuleRagdollVelocity_value;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_17 = CallFunc_Not_PreBool_ReturnValue_17;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_18 = CallFunc_Not_PreBool_ReturnValue_18;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue_1 = CallFunc_GetActorUpVector_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_5 = CallFunc_Multiply_VectorFloat_ReturnValue_5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_10 = CallFunc_K2_GetActorLocation_ReturnValue_10;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_11 = CallFunc_K2_GetActorLocation_ReturnValue_11;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_1 = CallFunc_Conv_VectorToTransform_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_55 = K2Node_CreateDelegate_OutputDelegate_55;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;
	Parms.CallFunc_HandleGetKickedCooldown_ReturnValue = CallFunc_HandleGetKickedCooldown_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_46 = K2Node_DynamicCast_bSuccess_46;
	Parms.K2Node_CustomEvent_NotifyName_38 = K2Node_CustomEvent_NotifyName_38;
	Parms.K2Node_CreateDelegate_OutputDelegate_56 = K2Node_CreateDelegate_OutputDelegate_56;
	Parms.K2Node_CustomEvent_NotifyName_39 = K2Node_CustomEvent_NotifyName_39;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_CreateDelegate_OutputDelegate_57 = K2Node_CreateDelegate_OutputDelegate_57;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_KickRune_1_Success_ = CallFunc_KickRune_1_Success_;
	Parms.K2Node_CustomEvent_BuffToStart = K2Node_CustomEvent_BuffToStart;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_47 = K2Node_DynamicCast_bSuccess_47;
	Parms.CallFunc_GetObjectClass_ReturnValue_3 = CallFunc_GetObjectClass_ReturnValue_3;
	Parms.CallFunc_HandleKickRunes_KickRune = CallFunc_HandleKickRunes_KickRune;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_6 = CallFunc_Multiply_VectorFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_7 = CallFunc_Multiply_VectorFloat_ReturnValue_7;
	Parms.CallFunc_ProjectVectorOnToPlane_ReturnValue = CallFunc_ProjectVectorOnToPlane_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_58 = K2Node_CreateDelegate_OutputDelegate_58;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_2 = CallFunc_Conv_VectorToRotator_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_15 = CallFunc_K2_SetTimerDelegate_ReturnValue_15;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.K2Node_DynamicCast_AsEnemy_Character_15 = K2Node_DynamicCast_AsEnemy_Character_15;
	Parms.K2Node_DynamicCast_bSuccess_48 = K2Node_DynamicCast_bSuccess_48;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_12 = CallFunc_K2_GetActorLocation_ReturnValue_12;
	Parms.K2Node_Event_Kicker = K2Node_Event_Kicker;
	Parms.K2Node_Event_KickerLocation = K2Node_Event_KickerLocation;
	Parms.K2Node_Event_ImpactLocation = K2Node_Event_ImpactLocation;
	Parms.K2Node_Event_Impulse = K2Node_Event_Impulse;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.K2Node_CustomEvent_FreezeDuration_1 = K2Node_CustomEvent_FreezeDuration_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess_49 = K2Node_DynamicCast_bSuccess_49;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_DynamicCast_AsBarbarous_1 = K2Node_DynamicCast_AsBarbarous_1;
	Parms.K2Node_DynamicCast_bSuccess_50 = K2Node_DynamicCast_bSuccess_50;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_8 = CallFunc_SpawnEmitterAtLocation_ReturnValue_8;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_4 = CallFunc_SpawnEmitterAttached_ReturnValue_4;
	Parms.CallFunc_GetAnimInstance_ReturnValue_6 = CallFunc_GetAnimInstance_ReturnValue_6;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_5 = CallFunc_SpawnEmitterAttached_ReturnValue_5;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_9 = CallFunc_SpawnEmitterAtLocation_ReturnValue_9;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_13 = CallFunc_K2_GetActorLocation_ReturnValue_13;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_14 = CallFunc_K2_GetActorLocation_ReturnValue_14;
	Parms.K2Node_CustomEvent_FreezeDuration = K2Node_CustomEvent_FreezeDuration;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsEnemy_Character_16 = K2Node_DynamicCast_AsEnemy_Character_16;
	Parms.K2Node_DynamicCast_bSuccess_51 = K2Node_DynamicCast_bSuccess_51;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_59 = K2Node_CreateDelegate_OutputDelegate_59;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_16 = CallFunc_K2_SetTimerDelegate_ReturnValue_16;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_19 = CallFunc_Not_PreBool_ReturnValue_19;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnRagdollEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnRagdollEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnRagdollEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.OnRagdollStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnRagdollStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnRagdollStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.WasHitWhileStone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::WasHitWhileStone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "WasHitWhileStone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.SwordTraceNotifyEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::SwordTraceNotifyEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SwordTraceNotifyEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.OnParriableStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnParriableStateChanged__DelegateSignature(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnParriableStateChanged__DelegateSignature");

	Params::ABaseCharacter_C_OnParriableStateChanged__DelegateSignature_Params Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnDamageBlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnDamageBlocked__DelegateSignature(class AActor* SourceActor, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnDamageBlocked__DelegateSignature");

	Params::ABaseCharacter_C_OnDamageBlocked__DelegateSignature_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnDamageAppliedToHitActor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnDamageAppliedToHitActor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnDamageAppliedToHitActor__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.OnRollOutOfRagdoll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnRollOutOfRagdoll__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnRollOutOfRagdoll__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


