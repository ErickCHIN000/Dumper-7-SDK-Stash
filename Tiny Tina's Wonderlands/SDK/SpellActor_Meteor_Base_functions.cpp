#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Meteor_Base.SpellActor_Meteor_Base_C
// (Actor)

class UClass* ASpellActor_Meteor_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Meteor_Base_C");

	return Clss;
}


// SpellActor_Meteor_Base_C SpellActor_Meteor_Base.Default__SpellActor_Meteor_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Meteor_Base_C* ASpellActor_Meteor_Base_C::GetDefaultObj()
{
	static class ASpellActor_Meteor_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Meteor_Base_C*>(ASpellActor_Meteor_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.TryFindMeteorTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionChannel       CallFunc_GetCollisionObjectType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpellActor_Meteor_Base_C::TryFindMeteorTarget(const struct FTransform& CallFunc_GetActorSocket_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "TryFindMeteorTarget");

	Params::ASpellActor_Meteor_Base_C_TryFindMeteorTarget_Params Parms{};

	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetCollisionObjectType_ReturnValue = CallFunc_GetCollisionObjectType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.InitMeteorProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_StaticGetParticleEffect_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// enum class ECollisionChannel       CallFunc_GetCollisionObjectType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpellActor_Meteor_Base_C::InitMeteorProjectile(bool CallFunc_IsValid_ReturnValue, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsAlive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "InitMeteorProjectile");

	Params::ASpellActor_Meteor_Base_C_InitMeteorProjectile_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StaticGetParticleEffect_ReturnValue = CallFunc_StaticGetParticleEffect_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_GetCollisionObjectType_ReturnValue = CallFunc_GetCollisionObjectType_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.GbxAsyncRequest_Miss_98A6D97448F0A2BF30988C994AEDB5C7
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpellActor_Meteor_Base_C::GbxAsyncRequest_Miss_98A6D97448F0A2BF30988C994AEDB5C7(struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "GbxAsyncRequest_Miss_98A6D97448F0A2BF30988C994AEDB5C7");

	Params::ASpellActor_Meteor_Base_C_GbxAsyncRequest_Miss_98A6D97448F0A2BF30988C994AEDB5C7_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.GbxAsyncRequest_Hit_98A6D97448F0A2BF30988C994AEDB5C7
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpellActor_Meteor_Base_C::GbxAsyncRequest_Hit_98A6D97448F0A2BF30988C994AEDB5C7(struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "GbxAsyncRequest_Hit_98A6D97448F0A2BF30988C994AEDB5C7");

	Params::ASpellActor_Meteor_Base_C_GbxAsyncRequest_Hit_98A6D97448F0A2BF30988C994AEDB5C7_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.GbxAsyncRequest_Miss_E925ABC847B67441CA750F933EA2B9DF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpellActor_Meteor_Base_C::GbxAsyncRequest_Miss_E925ABC847B67441CA750F933EA2B9DF(struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "GbxAsyncRequest_Miss_E925ABC847B67441CA750F933EA2B9DF");

	Params::ASpellActor_Meteor_Base_C_GbxAsyncRequest_Miss_E925ABC847B67441CA750F933EA2B9DF_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.GbxAsyncRequest_Hit_E925ABC847B67441CA750F933EA2B9DF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpellActor_Meteor_Base_C::GbxAsyncRequest_Hit_E925ABC847B67441CA750F933EA2B9DF(struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "GbxAsyncRequest_Hit_E925ABC847B67441CA750F933EA2B9DF");

	Params::ASpellActor_Meteor_Base_C_GbxAsyncRequest_Hit_E925ABC847B67441CA750F933EA2B9DF_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.TrySpawnPortal
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Base_C::TrySpawnPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "TrySpawnPortal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.FindMeteorSpawnLoc
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Base_C::FindMeteorSpawnLoc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "FindMeteorSpawnLoc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.BeginCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Base_C::BeginCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "BeginCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.TrySpawnMeteor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Base_C::TrySpawnMeteor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "TrySpawnMeteor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Base.SpellActor_Meteor_Base_C.ExecuteUbergraph_SpellActor_Meteor_Base
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  K2Node_CustomEvent_Result                                        (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
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
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Result1                                       (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomPointInBoundingBox_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FHitResult                  K2Node_CustomEvent_Result2                                       (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue3                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// struct FHitResult                  K2Node_CustomEvent_Result3                                       (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// class UClass*                      CallFunc_GetSpellDamageType_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxTraceAsyncRequest       K2Node_MakeStruct_GbxTraceAsyncRequest                           (ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomPointInBoundingBox_ReturnValue1                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGbxTraceAsyncRequest       K2Node_MakeStruct_GbxTraceAsyncRequest1                          (ContainsInstancedReference)
// struct FSpellLightProjectileInitializationDataK2Node_MakeStruct_SpellLightProjectileInitializationData         (ContainsInstancedReference)

void ASpellActor_Meteor_Base_C::ExecuteUbergraph_SpellActor_Meteor_Base(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, const struct FHitResult& K2Node_CustomEvent_Result, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Result1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& K2Node_CustomEvent_Result2, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, TArray<class AActor*>& K2Node_MakeArray_Array1, const struct FHitResult& K2Node_CustomEvent_Result3, int32 Temp_int_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class UClass* CallFunc_GetSpellDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_GetValueOfAttribute_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_FTrunc_ReturnValue, const struct FGbxTraceAsyncRequest& K2Node_MakeStruct_GbxTraceAsyncRequest, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGbxTraceAsyncRequest& K2Node_MakeStruct_GbxTraceAsyncRequest1, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Base_C", "ExecuteUbergraph_SpellActor_Meteor_Base");

	Params::ASpellActor_Meteor_Base_C_ExecuteUbergraph_SpellActor_Meteor_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
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
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_RandomPointInBoundingBox_ReturnValue = CallFunc_RandomPointInBoundingBox_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue3 = CallFunc_Add_VectorVector_ReturnValue3;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_CustomEvent_Result3 = K2Node_CustomEvent_Result3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.CallFunc_GetSpellDamageType_ReturnValue = CallFunc_GetSpellDamageType_ReturnValue;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_MakeStruct_GbxTraceAsyncRequest = K2Node_MakeStruct_GbxTraceAsyncRequest;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_RandomPointInBoundingBox_ReturnValue1 = CallFunc_RandomPointInBoundingBox_ReturnValue1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_GbxTraceAsyncRequest1 = K2Node_MakeStruct_GbxTraceAsyncRequest1;
	Parms.K2Node_MakeStruct_SpellLightProjectileInitializationData = K2Node_MakeStruct_SpellLightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}

}


