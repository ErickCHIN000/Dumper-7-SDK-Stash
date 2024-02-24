#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C
// (Actor)

class UClass* ABP_Wraith_Crypt_Icicle_Cathedral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wraith_Crypt_Icicle_Cathedral_C");

	return Clss;
}


// BP_Wraith_Crypt_Icicle_Cathedral_C BP_Wraith_Crypt_Icicle_Cathedral.Default__BP_Wraith_Crypt_Icicle_Cathedral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wraith_Crypt_Icicle_Cathedral_C* ABP_Wraith_Crypt_Icicle_Cathedral_C::GetDefaultObj()
{
	static class ABP_Wraith_Crypt_Icicle_Cathedral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wraith_Crypt_Icicle_Cathedral_C*>(ABP_Wraith_Crypt_Icicle_Cathedral_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C.GetHitResults
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FHitResult>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Wraith_Crypt_Icicle_Cathedral_C::GetHitResults(class AActor* Actor, TArray<struct FHitResult>* Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, TArray<struct FHitResult>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Crypt_Icicle_Cathedral_C", "GetHitResults");

	Params::ABP_Wraith_Crypt_Icicle_Cathedral_C_GetHitResults_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Wraith_Crypt_Icicle_Cathedral_C::UserConstructionScript(bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Crypt_Icicle_Cathedral_C", "UserConstructionScript");

	Params::ABP_Wraith_Crypt_Icicle_Cathedral_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C.BreakIcicleAndStatusEffectPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Crypt_Icicle_Cathedral_C::BreakIcicleAndStatusEffectPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Crypt_Icicle_Cathedral_C", "BreakIcicleAndStatusEffectPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C.SpikesFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Crypt_Icicle_Cathedral_C::SpikesFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Crypt_Icicle_Cathedral_C", "SpikesFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C.SpawnExplosionEmitters
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Crypt_Icicle_Cathedral_C::SpawnExplosionEmitters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Crypt_Icicle_Cathedral_C", "SpawnExplosionEmitters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C.Break Icicle and Status Effect Enemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Crypt_Icicle_Cathedral_C::Break_Icicle_and_Status_Effect_Enemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Crypt_Icicle_Cathedral_C", "Break Icicle and Status Effect Enemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C.SpawnAndDestroyDestructible
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Crypt_Icicle_Cathedral_C::SpawnAndDestroyDestructible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Crypt_Icicle_Cathedral_C", "SpawnAndDestroyDestructible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C.ExecuteUbergraph_BP_Wraith_Crypt_Icicle_Cathedral
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACathedralStatue_V2_DM_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlur_C*            CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_GetHitResults_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Crypt_Icicle_Cathedral_C::ExecuteUbergraph_BP_Wraith_Crypt_Icicle_Cathedral(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_BooleanOR_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_ApplyDamage_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACathedralStatue_V2_DM_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_ApplyDamage_ReturnValue_1, TArray<struct FHitResult>& CallFunc_GetHitResults_Array, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Crypt_Icicle_Cathedral_C", "ExecuteUbergraph_BP_Wraith_Crypt_Icicle_Cathedral");

	Params::ABP_Wraith_Crypt_Icicle_Cathedral_C_ExecuteUbergraph_BP_Wraith_Crypt_Icicle_Cathedral_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue_1 = CallFunc_ApplyDamage_ReturnValue_1;
	Parms.CallFunc_GetHitResults_Array = CallFunc_GetHitResults_Array;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


