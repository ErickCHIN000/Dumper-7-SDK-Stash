#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_MagicMissile_Base.LightProj_Spell_MagicMissile_Base_C
// (None)

class UClass* ULightProj_Spell_MagicMissile_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_MagicMissile_Base_C");

	return Clss;
}


// LightProj_Spell_MagicMissile_Base_C LightProj_Spell_MagicMissile_Base.Default__LightProj_Spell_MagicMissile_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_MagicMissile_Base_C* ULightProj_Spell_MagicMissile_Base_C::GetDefaultObj()
{
	static class ULightProj_Spell_MagicMissile_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_MagicMissile_Base_C*>(ULightProj_Spell_MagicMissile_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_MagicMissile_Base.LightProj_Spell_MagicMissile_Base_C.AddOverloadEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAbility_MagicMissile_C*     CallFunc_GetMagicMissileAbility_Res                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void ULightProj_Spell_MagicMissile_Base_C::AddOverloadEffect(class ULightProjectile* Projectile, const struct FHitResult& Hit, class UAbility_MagicMissile_C* CallFunc_GetMagicMissileAbility_Res, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_MagicMissile_Base_C", "AddOverloadEffect");

	Params::ULightProj_Spell_MagicMissile_Base_C_AddOverloadEffect_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.CallFunc_GetMagicMissileAbility_Res = CallFunc_GetMagicMissileAbility_Res;
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
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_MagicMissile_Base.LightProj_Spell_MagicMissile_Base_C.SpawnRicochetOnImpact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FEnvQueryParams             RicochetEQS                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    CallFunc_GetSpellData_Res                                        (NoDestructor)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          CallFunc_GeneratePointsOnCone_ReturnValue                        (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileInitializationDataK2Node_MakeStruct_LightProjectileInitializationData              (ContainsInstancedReference)

void ULightProj_Spell_MagicMissile_Base_C::SpawnRicochetOnImpact(class ULightProjectile* Projectile, const struct FHitResult& HitResult, const struct FEnvQueryParams& RicochetEQS, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_MagicMissile_Base_C", "SpawnRicochetOnImpact");

	Params::ULightProj_Spell_MagicMissile_Base_C_SpawnRicochetOnImpact_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.HitResult = HitResult;
	Parms.RicochetEQS = RicochetEQS;
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
	Parms.CallFunc_GetSpellData_Res = CallFunc_GetSpellData_Res;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GeneratePointsOnCone_ReturnValue = CallFunc_GeneratePointsOnCone_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_MakeStruct_LightProjectileInitializationData = K2Node_MakeStruct_LightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_MagicMissile_Base.LightProj_Spell_MagicMissile_Base_C.SearchForTargets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_MagicMissile_C*     CallFunc_GetMagicMissileAbility_Res                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHoming_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMagicMissileTarget_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMagicMissileTarget_Target                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_MagicMissile_Base_C::SearchForTargets(class ULightProjectile* Projectile, class UAbility_MagicMissile_C* CallFunc_GetMagicMissileAbility_Res, bool CallFunc_IsHoming_ReturnValue, bool CallFunc_GetMagicMissileTarget_Res, class AActor* CallFunc_GetMagicMissileTarget_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_MagicMissile_Base_C", "SearchForTargets");

	Params::ULightProj_Spell_MagicMissile_Base_C_SearchForTargets_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetMagicMissileAbility_Res = CallFunc_GetMagicMissileAbility_Res;
	Parms.CallFunc_IsHoming_ReturnValue = CallFunc_IsHoming_ReturnValue;
	Parms.CallFunc_GetMagicMissileTarget_Res = CallFunc_GetMagicMissileTarget_Res;
	Parms.CallFunc_GetMagicMissileTarget_Target = CallFunc_GetMagicMissileTarget_Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_MagicMissile_Base.LightProj_Spell_MagicMissile_Base_C.GetMagicMissileAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_MagicMissile_C*     Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    CallFunc_GetSpellData_Res                                        (NoDestructor)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_MagicMissile_C*     K2Node_DynamicCast_AsAbility_Magic_Missile                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_MagicMissile_Base_C::GetMagicMissileAbility(class ULightProjectile* Projectile, class UAbility_MagicMissile_C** Res, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_MagicMissile_C* K2Node_DynamicCast_AsAbility_Magic_Missile, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_MagicMissile_Base_C", "GetMagicMissileAbility");

	Params::ULightProj_Spell_MagicMissile_Base_C_GetMagicMissileAbility_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetSpellData_Res = CallFunc_GetSpellData_Res;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbility_Magic_Missile = K2Node_DynamicCast_AsAbility_Magic_Missile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function LightProj_Spell_MagicMissile_Base.LightProj_Spell_MagicMissile_Base_C.GetSpellData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    Res                                                              (Parm, OutParm, NoDestructor)
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_MagicMissile_Base_C::GetSpellData(class ULightProjectile* Projectile, struct FSpawnableSpellBasicData* Res, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_MagicMissile_Base_C", "GetSpellData");

	Params::ULightProj_Spell_MagicMissile_Base_C_GetSpellData_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);

}

}


