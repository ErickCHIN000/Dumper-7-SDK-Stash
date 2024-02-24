#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C
// (None)

class UClass* ULightProj_Spell_ElementalHawk_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_ElementalHawk_Base_C");

	return Clss;
}


// LightProj_Spell_ElementalHawk_Base_C LightProj_Spell_ElementalHawk_Base.Default__LightProj_Spell_ElementalHawk_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_ElementalHawk_Base_C* ULightProj_Spell_ElementalHawk_Base_C::GetDefaultObj()
{
	static class ULightProj_Spell_ElementalHawk_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_ElementalHawk_Base_C*>(ULightProj_Spell_ElementalHawk_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_ElementalHawk_Base_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "OnLifetimeExpired");

	Params::ULightProj_Spell_ElementalHawk_Base_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.OnDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               bCritical                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHitActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    CallFunc_GetSpellData_Res                                        (NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpellLightProjectileInitializationDataK2Node_MakeStruct_SpellLightProjectileInitializationData         (ContainsInstancedReference)

void ULightProj_Spell_ElementalHawk_Base_C::OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, class AActor* CallFunc_GetHitActor_ReturnValue, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "OnDamage");

	Params::ULightProj_Spell_ElementalHawk_Base_C_OnDamage_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.bCritical = bCritical;
	Parms.CallFunc_GetHitActor_ReturnValue = CallFunc_GetHitActor_ReturnValue;
	Parms.CallFunc_GetSpellData_Res = CallFunc_GetSpellData_Res;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeStruct_SpellLightProjectileInitializationData = K2Node_MakeStruct_SpellLightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_ElementalHawk_Base_C::OnBegin(class ULightProjectile* Projectile, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class AActor* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "OnBegin");

	Params::ULightProj_Spell_ElementalHawk_Base_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.ExecuteHawkEQS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ResultActors                                                     (Parm, OutParm, ZeroConstructor)
// bool                               ResultValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEnvQueryParams             LocalEQS                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_ElementalHawk_Base_C::ExecuteHawkEQS(class ULightProjectile* Projectile, TArray<class AActor*>* ResultActors, bool* ResultValue, const struct FEnvQueryParams& LocalEQS, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "ExecuteHawkEQS");

	Params::ULightProj_Spell_ElementalHawk_Base_C_ExecuteHawkEQS_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.LocalEQS = LocalEQS;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultActors != nullptr)
		*ResultActors = std::move(Parms.ResultActors);

	if (ResultValue != nullptr)
		*ResultValue = Parms.ResultValue;

}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.GetElementalHawkAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_Spell_ElementalHawk_C*Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 OwningMod                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    CallFunc_GetSpellData_Res                                        (NoDestructor)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_Spell_ElementalHawk_C*K2Node_DynamicCast_AsAbility_Spell_Elemental_Hawk                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_ElementalHawk_Base_C::GetElementalHawkAbility(class ULightProjectile* Projectile, class UAbility_Spell_ElementalHawk_C** Res, class AGrenadeMod** OwningMod, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Spell_ElementalHawk_C* K2Node_DynamicCast_AsAbility_Spell_Elemental_Hawk, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "GetElementalHawkAbility");

	Params::ULightProj_Spell_ElementalHawk_Base_C_GetElementalHawkAbility_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetSpellData_Res = CallFunc_GetSpellData_Res;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbility_Spell_Elemental_Hawk = K2Node_DynamicCast_AsAbility_Spell_Elemental_Hawk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

	if (OwningMod != nullptr)
		*OwningMod = Parms.OwningMod;

}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.GetSpellData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    Res                                                              (Parm, OutParm, NoDestructor)
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_ElementalHawk_Base_C::GetSpellData(class ULightProjectile* Projectile, struct FSpawnableSpellBasicData* Res, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "GetSpellData");

	Params::ULightProj_Spell_ElementalHawk_Base_C_GetSpellData_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);

}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.TryNewHomingTarget
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_FindHawkHomingTarget_HomingTarget                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindHawkHomingTarget_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHoming_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_ElementalHawk_Base_C::TryNewHomingTarget(class ULightProjectile* Projectile, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsAlive_ReturnValue, class AActor* CallFunc_FindHawkHomingTarget_HomingTarget, bool CallFunc_FindHawkHomingTarget_Res, bool CallFunc_IsHoming_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "TryNewHomingTarget");

	Params::ULightProj_Spell_ElementalHawk_Base_C_TryNewHomingTarget_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetTarget_ReturnValue = CallFunc_GetTarget_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_FindHawkHomingTarget_HomingTarget = CallFunc_FindHawkHomingTarget_HomingTarget;
	Parms.CallFunc_FindHawkHomingTarget_Res = CallFunc_FindHawkHomingTarget_Res;
	Parms.CallFunc_IsHoming_ReturnValue = CallFunc_IsHoming_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.SpawnMiniHawks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnvQueryParams             LocalEQS                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// float                              CallFunc_GetDataTableValue_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    CallFunc_GetSpellData_Res                                        (NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOakLightProjectileInitializationDataK2Node_MakeStruct_OakLightProjectileInitializationData           (ContainsInstancedReference)

void ULightProj_Spell_ElementalHawk_Base_C::SpawnMiniHawks(class ULightProjectile* Projectile, const struct FEnvQueryParams& LocalEQS, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue2, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "SpawnMiniHawks");

	Params::ULightProj_Spell_ElementalHawk_Base_C_SpawnMiniHawks_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.LocalEQS = LocalEQS;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetSpellData_Res = CallFunc_GetSpellData_Res;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetInstigator_ReturnValue2 = CallFunc_GetInstigator_ReturnValue2;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.K2Node_MakeStruct_OakLightProjectileInitializationData = K2Node_MakeStruct_OakLightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C.FindHawkHomingTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HomingTarget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEnvQueryParams             LocalEQS                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class AActor*>              CallFunc_ExecuteHawkEQS_ResultActors                             (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_ExecuteHawkEQS_ResultValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_ElementalHawk_Base_C::FindHawkHomingTarget(class ULightProjectile* Projectile, class AActor** HomingTarget, bool* Res, const struct FEnvQueryParams& LocalEQS, TArray<class AActor*>& CallFunc_ExecuteHawkEQS_ResultActors, bool CallFunc_ExecuteHawkEQS_ResultValue, class AActor* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_ElementalHawk_Base_C", "FindHawkHomingTarget");

	Params::ULightProj_Spell_ElementalHawk_Base_C_FindHawkHomingTarget_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.LocalEQS = LocalEQS;
	Parms.CallFunc_ExecuteHawkEQS_ResultActors = CallFunc_ExecuteHawkEQS_ResultActors;
	Parms.CallFunc_ExecuteHawkEQS_ResultValue = CallFunc_ExecuteHawkEQS_ResultValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (HomingTarget != nullptr)
		*HomingTarget = Parms.HomingTarget;

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


