#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Reviver.LightProj_Spell_Reviver_C
// (None)

class UClass* ULightProj_Spell_Reviver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Reviver_C");

	return Clss;
}


// LightProj_Spell_Reviver_C LightProj_Spell_Reviver.Default__LightProj_Spell_Reviver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Reviver_C* ULightProj_Spell_Reviver_C::GetDefaultObj()
{
	static class ULightProj_Spell_Reviver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Reviver_C*>(ULightProj_Spell_Reviver_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Spell_Reviver.LightProj_Spell_Reviver_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_Reviver_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Reviver_C", "OnLifetimeExpired");

	Params::ULightProj_Spell_Reviver_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_Reviver.LightProj_Spell_Reviver_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_Spell_Reviver_C::OnBegin(class ULightProjectile* Projectile, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Reviver_C", "OnBegin");

	Params::ULightProj_Spell_Reviver_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_Reviver.LightProj_Spell_Reviver_C.OnImpact
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AOakCharacter*               Target                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    InSpellData                                                      (Edit, BlueprintVisible, NoDestructor)
// struct FHitResult                  InHitData                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     Location                                                         (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInDownState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayExplosion_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Spell_Reviver_C::OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, class AOakCharacter* Target, const struct FSpawnableSpellBasicData& InSpellData, const struct FHitResult& InHitData, const struct FVector& Location, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsInDownState_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FHitResult& Temp_struct_Variable, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Reviver_C", "OnImpact");

	Params::ULightProj_Spell_Reviver_C_OnImpact_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.Target = Target;
	Parms.InSpellData = InSpellData;
	Parms.InHitData = InHitData;
	Parms.Location = Location;
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
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue = CallFunc_K2_EvaluateConditionType_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsInDownState_ReturnValue = CallFunc_IsInDownState_ReturnValue;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.CallFunc_PlayExplosion_ReturnValue = CallFunc_PlayExplosion_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_Spell_Reviver.LightProj_Spell_Reviver_C.TimerSpawnSeekers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnableSpellBasicData    InSpellData                                                      (Edit, BlueprintVisible, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// TArray<struct FTransform>          CallFunc_GeneratePointsOnCone_ReturnValue                        (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayExplosion_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpellLightProjectileInitializationDataK2Node_MakeStruct_SpellLightProjectileInitializationData         (ContainsInstancedReference)

void ULightProj_Spell_Reviver_C::TimerSpawnSeekers(class ULightProjectile* Projectile, const struct FSpawnableSpellBasicData& InSpellData, float Temp_float_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float Temp_float_Variable1, float Temp_float_Variable2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable3, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Select_Default, const struct FVector& CallFunc_GetForwardVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item1, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Spell_Reviver_C", "TimerSpawnSeekers");

	Params::ULightProj_Spell_Reviver_C_TimerSpawnSeekers_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.InSpellData = InSpellData;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.CallFunc_GeneratePointsOnCone_ReturnValue = CallFunc_GeneratePointsOnCone_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetForwardVector_ReturnValue1 = CallFunc_GetForwardVector_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_PlayExplosion_ReturnValue = CallFunc_PlayExplosion_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_MakeStruct_SpellLightProjectileInitializationData = K2Node_MakeStruct_SpellLightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}

}


