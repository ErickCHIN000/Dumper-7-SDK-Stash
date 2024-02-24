#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C
// (Actor)

class UClass* ABP_LazyWorkers_ContainerSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LazyWorkers_ContainerSpawner_C");

	return Clss;
}


// BP_LazyWorkers_ContainerSpawner_C BP_LazyWorkers_ContainerSpawner.Default__BP_LazyWorkers_ContainerSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LazyWorkers_ContainerSpawner_C* ABP_LazyWorkers_ContainerSpawner_C::GetDefaultObj()
{
	static class ABP_LazyWorkers_ContainerSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LazyWorkers_ContainerSpawner_C*>(ABP_LazyWorkers_ContainerSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.ContainerLerp__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_ContainerSpawner_C::ContainerLerp__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "ContainerLerp__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.ContainerLerp__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_ContainerSpawner_C::ContainerLerp__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "ContainerLerp__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.SpawnContainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_ContainerSpawner_C::SpawnContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "SpawnContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.SpawnContainerTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_ContainerSpawner_C::SpawnContainerTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "SpawnContainerTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.ActivateContainerSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FirstTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LazyWorkers_ContainerSpawner_C::ActivateContainerSpawner(bool FirstTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "ActivateContainerSpawner");

	Params::ABP_LazyWorkers_ContainerSpawner_C_ActivateContainerSpawner_Params Parms{};

	Parms.FirstTime = FirstTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.OnFinishedLoadingResources_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPhysicsActor*             PActor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LazyWorkers_ContainerSpawner_C::OnFinishedLoadingResources_Event(class AGGPhysicsActor* PActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "OnFinishedLoadingResources_Event");

	Params::ABP_LazyWorkers_ContainerSpawner_C_OnFinishedLoadingResources_Event_Params Parms{};

	Parms.PActor = PActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.ContainerSeekTowardGoat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPhysicsActor*             Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SeekingTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AlphaToGoBeforeBecomingPhysActor                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LazyWorkers_ContainerSpawner_C::ContainerSeekTowardGoat(class AGGPhysicsActor* Container, float SeekingTime, float AlphaToGoBeforeBecomingPhysActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "ContainerSeekTowardGoat");

	Params::ABP_LazyWorkers_ContainerSpawner_C_ContainerSeekTowardGoat_Params Parms{};

	Parms.Container = Container;
	Parms.SeekingTime = SeekingTime;
	Parms.AlphaToGoBeforeBecomingPhysActor = AlphaToGoBeforeBecomingPhysActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.PlaySpawnSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LazyWorkers_ContainerSpawner_C::PlaySpawnSound(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "PlaySpawnSound");

	Params::ABP_LazyWorkers_ContainerSpawner_C_PlaySpawnSound_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.DeactivateContainerSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LazyWorkers_ContainerSpawner_C::DeactivateContainerSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "DeactivateContainerSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LazyWorkers_ContainerSpawner.BP_LazyWorkers_ContainerSpawner_C.ExecuteUbergraph_BP_LazyWorkers_ContainerSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_firstTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPhysicsActor*             K2Node_CustomEvent_PActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGGPhysicsActor*             K2Node_CustomEvent_Container                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_SeekingTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AlphaToGoBeforeBecomingPhysActor              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGGoat*>             CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LazyWorker_ContainerFromSpawner_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LazyWorkers_ContainerSpawner_C::ExecuteUbergraph_BP_LazyWorkers_ContainerSpawner(int32 EntryPoint, bool K2Node_CustomEvent_firstTime, class AGGPhysicsActor* K2Node_CustomEvent_PActor, const struct FVector& CallFunc_MakeVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGGPhysicsActor* K2Node_CustomEvent_Container, float K2Node_CustomEvent_SeekingTime, float K2Node_CustomEvent_AlphaToGoBeforeBecomingPhysActor, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_VSize_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, TArray<class AGGGoat*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class AGGGoat* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_LazyWorker_ContainerFromSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LazyWorkers_ContainerSpawner_C", "ExecuteUbergraph_BP_LazyWorkers_ContainerSpawner");

	Params::ABP_LazyWorkers_ContainerSpawner_C_ExecuteUbergraph_BP_LazyWorkers_ContainerSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_firstTime = K2Node_CustomEvent_firstTime;
	Parms.K2Node_CustomEvent_PActor = K2Node_CustomEvent_PActor;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Container = K2Node_CustomEvent_Container;
	Parms.K2Node_CustomEvent_SeekingTime = K2Node_CustomEvent_SeekingTime;
	Parms.K2Node_CustomEvent_AlphaToGoBeforeBecomingPhysActor = K2Node_CustomEvent_AlphaToGoBeforeBecomingPhysActor;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_6 = CallFunc_K2_GetActorLocation_ReturnValue_6;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_7 = CallFunc_K2_GetActorLocation_ReturnValue_7;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


