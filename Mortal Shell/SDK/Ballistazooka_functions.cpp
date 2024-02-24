#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ballistazooka.Ballistazooka_C
// (Actor)

class UClass* ABallistazooka_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ballistazooka_C");

	return Clss;
}


// Ballistazooka_C Ballistazooka.Default__Ballistazooka_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABallistazooka_C* ABallistazooka_C::GetDefaultObj()
{
	static class ABallistazooka_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABallistazooka_C*>(ABallistazooka_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ballistazooka.Ballistazooka_C.GetBoltSpawnTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetCameraProjectileSpawnTransform_SpawnTransform        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldSpawnProjectileFromCamera_bSpawnFromCamera        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)

struct FTransform ABallistazooka_C::GetBoltSpawnTransform(bool Temp_bool_Variable, const struct FTransform& CallFunc_GetCameraProjectileSpawnTransform_SpawnTransform, bool CallFunc_ShouldSpawnProjectileFromCamera_bSpawnFromCamera, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "GetBoltSpawnTransform");

	Params::ABallistazooka_C_GetBoltSpawnTransform_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCameraProjectileSpawnTransform_SpawnTransform = CallFunc_GetCameraProjectileSpawnTransform_SpawnTransform;
	Parms.CallFunc_ShouldSpawnProjectileFromCamera_bSpawnFromCamera = CallFunc_ShouldSpawnProjectileFromCamera_bSpawnFromCamera;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ballistazooka.Ballistazooka_C.GetReloadRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABallistazooka_C::GetReloadRate(float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "GetReloadRate");

	Params::ABallistazooka_C_GetReloadRate_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ballistazooka.Ballistazooka_C.GetCameraProjectileSpawnTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinePlaneIntersection_OriginNormal_T                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LinePlaneIntersection_OriginNormal_Intersection         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ABallistazooka_C::GetCameraProjectileSpawnTransform(struct FTransform* SpawnTransform, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_LinePlaneIntersection_OriginNormal_T, const struct FVector& CallFunc_LinePlaneIntersection_OriginNormal_Intersection, bool CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "GetCameraProjectileSpawnTransform");

	Params::ABallistazooka_C_GetCameraProjectileSpawnTransform_Params Parms{};

	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LinePlaneIntersection_OriginNormal_T = CallFunc_LinePlaneIntersection_OriginNormal_T;
	Parms.CallFunc_LinePlaneIntersection_OriginNormal_Intersection = CallFunc_LinePlaneIntersection_OriginNormal_Intersection;
	Parms.CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue = CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnTransform != nullptr)
		*SpawnTransform = std::move(Parms.SpawnTransform);

}


// Function Ballistazooka.Ballistazooka_C.ShouldSpawnProjectileFromCamera
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bSpawnFromCamera                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::ShouldSpawnProjectileFromCamera(bool* bSpawnFromCamera, const struct FVector& CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "ShouldSpawnProjectileFromCamera");

	Params::ABallistazooka_C_ShouldSpawnProjectileFromCamera_Params Parms{};

	Parms.CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation = CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSpawnFromCamera != nullptr)
		*bSpawnFromCamera = Parms.bSpawnFromCamera;

}


// Function Ballistazooka.Ballistazooka_C.PlayClientFireEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::PlayClientFireEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "PlayClientFireEffects");

	Params::ABallistazooka_C_PlayClientFireEffects_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.InterpWeaponRotationTowardsSocketRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::InterpWeaponRotationTowardsSocketRotation(float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "InterpWeaponRotationTowardsSocketRotation");

	Params::ABallistazooka_C_InterpWeaponRotationTowardsSocketRotation_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.IsWeaponAiming
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldRotateWeaponTowardsAimTarget                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::IsWeaponAiming(bool* ShouldRotateWeaponTowardsAimTarget, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "IsWeaponAiming");

	Params::ABallistazooka_C_IsWeaponAiming_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldRotateWeaponTowardsAimTarget != nullptr)
		*ShouldRotateWeaponTowardsAimTarget = Parms.ShouldRotateWeaponTowardsAimTarget;

}


// Function Ballistazooka.Ballistazooka_C.InterpWeaponRotationTowardsAimTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::InterpWeaponRotationTowardsAimTarget(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "InterpWeaponRotationTowardsAimTarget");

	Params::ABallistazooka_C_InterpWeaponRotationTowardsAimTarget_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation = CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.GetCameratTraceImpactLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     CameraTargetTraceLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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

void ABallistazooka_C::GetCameratTraceImpactLocation(struct FVector* CameraTargetTraceLocation, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "GetCameratTraceImpactLocation");

	Params::ABallistazooka_C_GetCameratTraceImpactLocation_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
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

	UObject::ProcessEvent(Func, &Parms);

	if (CameraTargetTraceLocation != nullptr)
		*CameraTargetTraceLocation = std::move(Parms.CameraTargetTraceLocation);

}


// Function Ballistazooka.Ballistazooka_C.DoFireProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetBoltSpawnTransform_ReturnValue                       (IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABalistazookaProjectile_Explosive_Blast_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetBoltSpawnTransform_ReturnValue_1                     (IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABalistazookaProjectile_Explosive_Poison_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetBoltSpawnTransform_ReturnValue_2                     (IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABalistazookaProjectile_Explosive_Ice_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetBoltSpawnTransform_ReturnValue_3                     (IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABalistazookaProjectile_Explosive_Fire_C*CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetBoltSpawnTransform_ReturnValue_4                     (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABalistazookaProjectile_C*   CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::DoFireProjectile(const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABalistazookaProjectile_Explosive_Blast_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABalistazookaProjectile_Explosive_Poison_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue_2, bool CallFunc_RandomBoolWithWeight_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABalistazookaProjectile_Explosive_Ice_C* CallFunc_FinishSpawningActor_ReturnValue_2, const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue_3, bool CallFunc_RandomBoolWithWeight_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABalistazookaProjectile_Explosive_Fire_C* CallFunc_FinishSpawningActor_ReturnValue_3, const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class ABalistazookaProjectile_C* CallFunc_FinishSpawningActor_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "DoFireProjectile");

	Params::ABallistazooka_C_DoFireProjectile_Params Parms{};

	Parms.CallFunc_GetBoltSpawnTransform_ReturnValue = CallFunc_GetBoltSpawnTransform_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetBoltSpawnTransform_ReturnValue_1 = CallFunc_GetBoltSpawnTransform_ReturnValue_1;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue_1 = CallFunc_RandomBoolWithWeight_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetBoltSpawnTransform_ReturnValue_2 = CallFunc_GetBoltSpawnTransform_ReturnValue_2;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue_2 = CallFunc_RandomBoolWithWeight_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_GetBoltSpawnTransform_ReturnValue_3 = CallFunc_GetBoltSpawnTransform_ReturnValue_3;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue_3 = CallFunc_RandomBoolWithWeight_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_GetBoltSpawnTransform_ReturnValue_4 = CallFunc_GetBoltSpawnTransform_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.ConsumeAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::ConsumeAmmo(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "ConsumeAmmo");

	Params::ABallistazooka_C_ConsumeAmmo_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_PC_1 = K2Node_DynamicCast_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.HasAmmoToReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHasAmmo                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::HasAmmoToReload(bool* bHasAmmo, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "HasAmmoToReload");

	Params::ABallistazooka_C_HasAmmoToReload_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasAmmo != nullptr)
		*bHasAmmo = Parms.bHasAmmo;

}


// Function Ballistazooka.Ballistazooka_C.CanReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanReload                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAmmoToReload_bHasAmmo                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::CanReload(bool* bCanReload, bool CallFunc_HasAmmoToReload_bHasAmmo, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "CanReload");

	Params::ABallistazooka_C_CanReload_Params Parms{};

	Parms.CallFunc_HasAmmoToReload_bHasAmmo = CallFunc_HasAmmoToReload_bHasAmmo;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanReload != nullptr)
		*bCanReload = Parms.bCanReload;

}


// Function Ballistazooka.Ballistazooka_C.CanFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanFire_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::CanFire(bool* bCanFire_, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "CanFire");

	Params::ABallistazooka_C_CanFire_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanFire_ != nullptr)
		*bCanFire_ = Parms.bCanFire_;

}


// Function Ballistazooka.Ballistazooka_C.Timeline_Ballistazooka_Hide__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABallistazooka_C::Timeline_Ballistazooka_Hide__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "Timeline_Ballistazooka_Hide__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.Timeline_Ballistazooka_Hide__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABallistazooka_C::Timeline_Ballistazooka_Hide__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "Timeline_Ballistazooka_Hide__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyEnd_C3566AE24B3CFF7EBB50BDBDF8D3A9FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyEnd_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyEnd_C3566AE24B3CFF7EBB50BDBDF8D3A9FF");

	Params::ABallistazooka_C_OnNotifyEnd_C3566AE24B3CFF7EBB50BDBDF8D3A9FF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyBegin_C3566AE24B3CFF7EBB50BDBDF8D3A9FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyBegin_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyBegin_C3566AE24B3CFF7EBB50BDBDF8D3A9FF");

	Params::ABallistazooka_C_OnNotifyBegin_C3566AE24B3CFF7EBB50BDBDF8D3A9FF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnInterrupted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnInterrupted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnInterrupted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF");

	Params::ABallistazooka_C_OnInterrupted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnBlendOut_C3566AE24B3CFF7EBB50BDBDF8D3A9FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnBlendOut_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnBlendOut_C3566AE24B3CFF7EBB50BDBDF8D3A9FF");

	Params::ABallistazooka_C_OnBlendOut_C3566AE24B3CFF7EBB50BDBDF8D3A9FF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnCompleted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnCompleted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnCompleted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF");

	Params::ABallistazooka_C_OnCompleted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyEnd_69C89DB84D5FCA7448D684BBEF8CA318
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyEnd_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyEnd_69C89DB84D5FCA7448D684BBEF8CA318");

	Params::ABallistazooka_C_OnNotifyEnd_69C89DB84D5FCA7448D684BBEF8CA318_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyBegin_69C89DB84D5FCA7448D684BBEF8CA318
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyBegin_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyBegin_69C89DB84D5FCA7448D684BBEF8CA318");

	Params::ABallistazooka_C_OnNotifyBegin_69C89DB84D5FCA7448D684BBEF8CA318_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnInterrupted_69C89DB84D5FCA7448D684BBEF8CA318
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnInterrupted_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnInterrupted_69C89DB84D5FCA7448D684BBEF8CA318");

	Params::ABallistazooka_C_OnInterrupted_69C89DB84D5FCA7448D684BBEF8CA318_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnBlendOut_69C89DB84D5FCA7448D684BBEF8CA318
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnBlendOut_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnBlendOut_69C89DB84D5FCA7448D684BBEF8CA318");

	Params::ABallistazooka_C_OnBlendOut_69C89DB84D5FCA7448D684BBEF8CA318_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnCompleted_69C89DB84D5FCA7448D684BBEF8CA318
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnCompleted_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnCompleted_69C89DB84D5FCA7448D684BBEF8CA318");

	Params::ABallistazooka_C_OnCompleted_69C89DB84D5FCA7448D684BBEF8CA318_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyEnd_158DE4FE4B21BA6AFD4CC192F0A9D62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyEnd_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyEnd_158DE4FE4B21BA6AFD4CC192F0A9D62F");

	Params::ABallistazooka_C_OnNotifyEnd_158DE4FE4B21BA6AFD4CC192F0A9D62F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyBegin_158DE4FE4B21BA6AFD4CC192F0A9D62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyBegin_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyBegin_158DE4FE4B21BA6AFD4CC192F0A9D62F");

	Params::ABallistazooka_C_OnNotifyBegin_158DE4FE4B21BA6AFD4CC192F0A9D62F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnInterrupted_158DE4FE4B21BA6AFD4CC192F0A9D62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnInterrupted_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnInterrupted_158DE4FE4B21BA6AFD4CC192F0A9D62F");

	Params::ABallistazooka_C_OnInterrupted_158DE4FE4B21BA6AFD4CC192F0A9D62F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnBlendOut_158DE4FE4B21BA6AFD4CC192F0A9D62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnBlendOut_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnBlendOut_158DE4FE4B21BA6AFD4CC192F0A9D62F");

	Params::ABallistazooka_C_OnBlendOut_158DE4FE4B21BA6AFD4CC192F0A9D62F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnCompleted_158DE4FE4B21BA6AFD4CC192F0A9D62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnCompleted_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnCompleted_158DE4FE4B21BA6AFD4CC192F0A9D62F");

	Params::ABallistazooka_C_OnCompleted_158DE4FE4B21BA6AFD4CC192F0A9D62F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyEnd_A26BFC9D4E8525E44F7C0D81F082264F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyEnd_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyEnd_A26BFC9D4E8525E44F7C0D81F082264F");

	Params::ABallistazooka_C_OnNotifyEnd_A26BFC9D4E8525E44F7C0D81F082264F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyBegin_A26BFC9D4E8525E44F7C0D81F082264F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyBegin_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyBegin_A26BFC9D4E8525E44F7C0D81F082264F");

	Params::ABallistazooka_C_OnNotifyBegin_A26BFC9D4E8525E44F7C0D81F082264F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnInterrupted_A26BFC9D4E8525E44F7C0D81F082264F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnInterrupted_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnInterrupted_A26BFC9D4E8525E44F7C0D81F082264F");

	Params::ABallistazooka_C_OnInterrupted_A26BFC9D4E8525E44F7C0D81F082264F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnBlendOut_A26BFC9D4E8525E44F7C0D81F082264F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnBlendOut_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnBlendOut_A26BFC9D4E8525E44F7C0D81F082264F");

	Params::ABallistazooka_C_OnBlendOut_A26BFC9D4E8525E44F7C0D81F082264F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnCompleted_A26BFC9D4E8525E44F7C0D81F082264F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnCompleted_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnCompleted_A26BFC9D4E8525E44F7C0D81F082264F");

	Params::ABallistazooka_C_OnCompleted_A26BFC9D4E8525E44F7C0D81F082264F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyEnd_0177B7C04E6679C49EEED8B5CE9630E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyEnd_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyEnd_0177B7C04E6679C49EEED8B5CE9630E0");

	Params::ABallistazooka_C_OnNotifyEnd_0177B7C04E6679C49EEED8B5CE9630E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyBegin_0177B7C04E6679C49EEED8B5CE9630E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyBegin_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyBegin_0177B7C04E6679C49EEED8B5CE9630E0");

	Params::ABallistazooka_C_OnNotifyBegin_0177B7C04E6679C49EEED8B5CE9630E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnInterrupted_0177B7C04E6679C49EEED8B5CE9630E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnInterrupted_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnInterrupted_0177B7C04E6679C49EEED8B5CE9630E0");

	Params::ABallistazooka_C_OnInterrupted_0177B7C04E6679C49EEED8B5CE9630E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnBlendOut_0177B7C04E6679C49EEED8B5CE9630E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnBlendOut_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnBlendOut_0177B7C04E6679C49EEED8B5CE9630E0");

	Params::ABallistazooka_C_OnBlendOut_0177B7C04E6679C49EEED8B5CE9630E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnCompleted_0177B7C04E6679C49EEED8B5CE9630E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnCompleted_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnCompleted_0177B7C04E6679C49EEED8B5CE9630E0");

	Params::ABallistazooka_C_OnCompleted_0177B7C04E6679C49EEED8B5CE9630E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyEnd_56C202954E2FFFBCD7D60892A75D6AEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyEnd_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyEnd_56C202954E2FFFBCD7D60892A75D6AEF");

	Params::ABallistazooka_C_OnNotifyEnd_56C202954E2FFFBCD7D60892A75D6AEF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnNotifyBegin_56C202954E2FFFBCD7D60892A75D6AEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnNotifyBegin_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnNotifyBegin_56C202954E2FFFBCD7D60892A75D6AEF");

	Params::ABallistazooka_C_OnNotifyBegin_56C202954E2FFFBCD7D60892A75D6AEF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnInterrupted_56C202954E2FFFBCD7D60892A75D6AEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnInterrupted_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnInterrupted_56C202954E2FFFBCD7D60892A75D6AEF");

	Params::ABallistazooka_C_OnInterrupted_56C202954E2FFFBCD7D60892A75D6AEF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnBlendOut_56C202954E2FFFBCD7D60892A75D6AEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnBlendOut_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnBlendOut_56C202954E2FFFBCD7D60892A75D6AEF");

	Params::ABallistazooka_C_OnBlendOut_56C202954E2FFFBCD7D60892A75D6AEF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnCompleted_56C202954E2FFFBCD7D60892A75D6AEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnCompleted_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnCompleted_56C202954E2FFFBCD7D60892A75D6AEF");

	Params::ABallistazooka_C_OnCompleted_56C202954E2FFFBCD7D60892A75D6AEF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.Unequip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::Unequip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "Unequip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.EquipAndAttachToCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::EquipAndAttachToCharacter(class AZero_Base_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "EquipAndAttachToCharacter");

	Params::ABallistazooka_C_EquipAndAttachToCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.PlayOutOfAmmoMontageIfNotCurrentlyReloading
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::PlayOutOfAmmoMontageIfNotCurrentlyReloading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "PlayOutOfAmmoMontageIfNotCurrentlyReloading");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "ReceiveTick");

	Params::ABallistazooka_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABallistazooka_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.AttachToCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                WieldingCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::AttachToCharacter(class AZero_Base_C* WieldingCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "AttachToCharacter");

	Params::ABallistazooka_C_AttachToCharacter_Params Parms{};

	Parms.WieldingCharacter = WieldingCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.QuickUnequip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::QuickUnequip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "QuickUnequip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.Ballistazooka_Hide_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::Ballistazooka_Hide_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "Ballistazooka_Hide_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.Ballistazooka_Hide_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::Ballistazooka_Hide_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "Ballistazooka_Hide_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.OnOpacityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::OnOpacityChanged(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnOpacityChanged");

	Params::ABallistazooka_C_OnOpacityChanged_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.CheckBallistazookaOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::CheckBallistazookaOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "CheckBallistazookaOpacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.DoReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                ReloadMontage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                WeaponMontage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipAndFastReload                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::DoReload(class UAnimMontage* ReloadMontage, class UAnimMontage* WeaponMontage, bool IsEquipAndFastReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "DoReload");

	Params::ABallistazooka_C_DoReload_Params Parms{};

	Parms.ReloadMontage = ReloadMontage;
	Parms.WeaponMontage = WeaponMontage;
	Parms.IsEquipAndFastReload = IsEquipAndFastReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.TryReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::TryReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "TryReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.TryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::TryFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "TryFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.ExecuteUbergraph_Ballistazooka
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAmmoToReload_bHasAmmo                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAmmoToReload_bHasAmmo_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_CustomEvent_WieldingCharacter                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Opacity                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBallistazookaOpacity_Opacity                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetReloadRate_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetReloadRate_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class UAnimMontage*                K2Node_CustomEvent_ReloadMontage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_WeaponMontage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isEquipAndFastReload                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanReload_bCanReload                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABallistazooka_C::ExecuteUbergraph_Ballistazooka(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName Temp_name_Variable_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName K2Node_CustomEvent_NotifyName_27, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_HasAmmoToReload_bHasAmmo, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_CustomEvent_Character, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool CallFunc_HasAmmoToReload_bHasAmmo_1, class FName K2Node_CustomEvent_NotifyName_28, class AZero_Base_C* K2Node_CustomEvent_WieldingCharacter, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, float K2Node_CustomEvent_Opacity, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetBallistazookaOpacity_Opacity, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName Temp_name_Variable_5, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_GetReloadRate_ReturnValue, float CallFunc_GetReloadRate_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName K2Node_CustomEvent_NotifyName_26, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class UAnimMontage* K2Node_CustomEvent_ReloadMontage, class UAnimMontage* K2Node_CustomEvent_WeaponMontage, bool K2Node_CustomEvent_isEquipAndFastReload, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_CanReload_bCanReload, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_29, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "ExecuteUbergraph_Ballistazooka");

	Params::ABallistazooka_C_ExecuteUbergraph_Ballistazooka_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_HasAmmoToReload_bHasAmmo = CallFunc_HasAmmoToReload_bHasAmmo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_HasAmmoToReload_bHasAmmo_1 = CallFunc_HasAmmoToReload_bHasAmmo_1;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.K2Node_CustomEvent_WieldingCharacter = K2Node_CustomEvent_WieldingCharacter;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.K2Node_CustomEvent_Opacity = K2Node_CustomEvent_Opacity;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBallistazookaOpacity_Opacity = CallFunc_GetBallistazookaOpacity_Opacity;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetReloadRate_ReturnValue = CallFunc_GetReloadRate_ReturnValue;
	Parms.CallFunc_GetReloadRate_ReturnValue_1 = CallFunc_GetReloadRate_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_CustomEvent_ReloadMontage = K2Node_CustomEvent_ReloadMontage;
	Parms.K2Node_CustomEvent_WeaponMontage = K2Node_CustomEvent_WeaponMontage;
	Parms.K2Node_CustomEvent_isEquipAndFastReload = K2Node_CustomEvent_isEquipAndFastReload;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_CanReload_bCanReload = CallFunc_CanReload_bCanReload;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ballistazooka.Ballistazooka_C.OnEquipFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABallistazooka_C::OnEquipFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnEquipFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistazooka.Ballistazooka_C.OnUnequipFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Completed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABallistazooka_C::OnUnequipFinished__DelegateSignature(bool Completed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistazooka_C", "OnUnequipFinished__DelegateSignature");

	Params::ABallistazooka_C_OnUnequipFinished__DelegateSignature_Params Parms{};

	Parms.Completed = Completed;

	UObject::ProcessEvent(Func, &Parms);

}

}


