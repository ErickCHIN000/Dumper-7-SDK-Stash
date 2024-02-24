#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C
// (None)

class UClass* UBP_PlayerEffectsComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerEffectsComponent_C");

	return Clss;
}


// BP_PlayerEffectsComponent_C BP_PlayerEffectsComponent.Default__BP_PlayerEffectsComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerEffectsComponent_C* UBP_PlayerEffectsComponent_C::GetDefaultObj()
{
	static class UBP_PlayerEffectsComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerEffectsComponent_C*>(UBP_PlayerEffectsComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.SetOwnerOverride
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             OwnerOverride                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_GetEffectOwner_OwnerComponent                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetEffectOwner_OwnerComponent_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::SetOwnerOverride(class USceneComponent* OwnerOverride, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USceneComponent* CallFunc_GetEffectOwner_OwnerComponent, class USceneComponent* CallFunc_GetEffectOwner_OwnerComponent_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "SetOwnerOverride");

	Params::UBP_PlayerEffectsComponent_C_SetOwnerOverride_Params Parms{};

	Parms.OwnerOverride = OwnerOverride;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEffectOwner_OwnerComponent = CallFunc_GetEffectOwner_OwnerComponent;
	Parms.CallFunc_GetEffectOwner_OwnerComponent_1 = CallFunc_GetEffectOwner_OwnerComponent_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.GetEffectOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             OwnerComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::GetEffectOwner(class USceneComponent** OwnerComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "GetEffectOwner");

	Params::UBP_PlayerEffectsComponent_C_GetEffectOwner_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerComponent != nullptr)
		*OwnerComponent = Parms.OwnerComponent;

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.GetEffectTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     TargetLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetEffectOwner_OwnerComponent                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::GetEffectTargetLocation(struct FVector* TargetLocation, class USceneComponent* CallFunc_GetEffectOwner_OwnerComponent, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "GetEffectTargetLocation");

	Params::UBP_PlayerEffectsComponent_C_GetEffectTargetLocation_Params Parms{};

	Parms.CallFunc_GetEffectOwner_OwnerComponent = CallFunc_GetEffectOwner_OwnerComponent;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetLocation != nullptr)
		*TargetLocation = std::move(Parms.TargetLocation);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.UpdateRainDropsPP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WeatherVal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RainDropMulti                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Sheltered_Sheltered                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::UpdateRainDropsPP(float WeatherVal, float RainDropMulti, bool CallFunc_Is_Sheltered_Sheltered, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "UpdateRainDropsPP");

	Params::UBP_PlayerEffectsComponent_C_UpdateRainDropsPP_Params Parms{};

	Parms.WeatherVal = WeatherVal;
	Parms.RainDropMulti = RainDropMulti;
	Parms.CallFunc_Is_Sheltered_Sheltered = CallFunc_Is_Sheltered_Sheltered;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.GetPlayerVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_PlayerEffectsComponent_C::GetPlayerVelocity(class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "GetPlayerVelocity");

	Params::UBP_PlayerEffectsComponent_C_GetPlayerVelocity_Params Parms{};

	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.WeatherCaptureGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WeatherCullGridTraceSize2                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WeatherCullGridSize2                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_2                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_3                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_4                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_5                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_6                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_7                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_8                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_9                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_10                                          (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_11                                          (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_12                                          (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_13                                          (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_14                                          (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_15                                          (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_16                                          (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_17                                          (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_18                                          (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_19                                          (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_23                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit                                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_24                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_1                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_25                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_14                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_26                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_15                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_2                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_27                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_28                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_16                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_17                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_3                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_29                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_30                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_18                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_31                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_19                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_32                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_4                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_33                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_34                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_35                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_36                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_20                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_23                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_37                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_38                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_21                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_22                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_5                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_39                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_23                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_6                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_24                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_25                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_40                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_24                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_41                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_25                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_7                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_26                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_27                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_42                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_43                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_26                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_27                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_8                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_28                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_29                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_20                                          (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_MakeVector_ReturnValue_44                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_9                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_28                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_45                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_29                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_21                                          (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_10                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_11                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_46                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_47                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_48                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_49                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_50                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_30                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_31                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_51                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_32                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_30                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_33                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_52                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_53                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_31                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_32                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_12                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_54                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_33                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_13                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_34                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_35                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_55                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_34                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_56                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_35                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_14                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_36                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_37                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_57                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_58                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_36                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_37                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_15                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_38                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_39                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_22                                          (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_MakeVector_ReturnValue_59                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_16                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_38                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_60                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_23                                          (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_39                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_17                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_18                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_24                                          (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_19                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_61                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_62                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_63                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_64                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_20               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_21               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_40                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_41                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_65                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_42                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_40                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_43                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_66                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_67                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_41                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_42                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_20                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_20                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_68                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_43                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_21                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_21                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_22               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_44                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_45                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_69                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_44                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_70                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_23               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_45                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_22                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_22                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_46                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_47                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_24               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_71                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_72                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_46                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_47                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_23                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_23                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_48                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_49                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_73                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_74                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_48                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_49                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit_24                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue_24                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::WeatherCaptureGrid(float WeatherCullGridTraceSize2, float WeatherCullGridSize2, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, TArray<class AActor*>& Temp_object_Variable_2, TArray<class AActor*>& Temp_object_Variable_3, TArray<class AActor*>& Temp_object_Variable_4, TArray<class AActor*>& Temp_object_Variable_5, TArray<class AActor*>& Temp_object_Variable_6, TArray<class AActor*>& Temp_object_Variable_7, TArray<class AActor*>& Temp_object_Variable_8, TArray<class AActor*>& Temp_object_Variable_9, TArray<class AActor*>& Temp_object_Variable_10, TArray<class AActor*>& Temp_object_Variable_11, TArray<class AActor*>& Temp_object_Variable_12, TArray<class AActor*>& Temp_object_Variable_13, TArray<class AActor*>& Temp_object_Variable_14, TArray<class AActor*>& Temp_object_Variable_15, TArray<class AActor*>& Temp_object_Variable_16, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable_17, TArray<class AActor*>& Temp_object_Variable_18, TArray<class AActor*>& Temp_object_Variable_19, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_4, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation, const struct FVector& CallFunc_MakeVector_ReturnValue_5, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_9, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_3, const struct FVector& CallFunc_MakeVector_ReturnValue_10, const struct FVector& CallFunc_MakeVector_ReturnValue_11, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_4, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue_12, const struct FVector& CallFunc_MakeVector_ReturnValue_13, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, const struct FVector& CallFunc_MakeVector_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue_15, const struct FVector& CallFunc_MakeVector_ReturnValue_16, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_8, const struct FVector& CallFunc_MakeVector_ReturnValue_17, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue_18, const struct FVector& CallFunc_MakeVector_ReturnValue_19, const struct FVector& CallFunc_MakeVector_ReturnValue_20, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_5, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_6, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, const struct FVector& CallFunc_MakeVector_ReturnValue_21, float CallFunc_Multiply_FloatFloat_ReturnValue_12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_13, const struct FVector& CallFunc_MakeVector_ReturnValue_22, const struct FVector& CallFunc_MakeVector_ReturnValue_23, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_11, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_12, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit, bool CallFunc_BoxTraceSingle_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_24, float CallFunc_SelectFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_13, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_1, bool CallFunc_BoxTraceSingle_ReturnValue_1, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_7, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_15, float CallFunc_SelectFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_25, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_14, const struct FVector& CallFunc_MakeVector_ReturnValue_26, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_15, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_2, bool CallFunc_BoxTraceSingle_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_16, float CallFunc_Multiply_FloatFloat_ReturnValue_17, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_9, const struct FVector& CallFunc_MakeVector_ReturnValue_27, const struct FVector& CallFunc_MakeVector_ReturnValue_28, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_16, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_17, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_3, bool CallFunc_BoxTraceSingle_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_18, float CallFunc_Multiply_FloatFloat_ReturnValue_19, const struct FVector& CallFunc_MakeVector_ReturnValue_29, const struct FVector& CallFunc_MakeVector_ReturnValue_30, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_18, const struct FVector& CallFunc_MakeVector_ReturnValue_31, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_19, const struct FVector& CallFunc_MakeVector_ReturnValue_32, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_4, bool CallFunc_BoxTraceSingle_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_33, const struct FVector& CallFunc_MakeVector_ReturnValue_34, const struct FVector& CallFunc_MakeVector_ReturnValue_35, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_10, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_11, float CallFunc_Multiply_FloatFloat_ReturnValue_20, float CallFunc_Multiply_FloatFloat_ReturnValue_21, const struct FVector& CallFunc_MakeVector_ReturnValue_36, float CallFunc_Multiply_FloatFloat_ReturnValue_22, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_20, float CallFunc_Multiply_FloatFloat_ReturnValue_23, const struct FVector& CallFunc_MakeVector_ReturnValue_37, const struct FVector& CallFunc_MakeVector_ReturnValue_38, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_21, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_22, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_5, bool CallFunc_BoxTraceSingle_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_39, float CallFunc_SelectFloat_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_23, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_6, bool CallFunc_BoxTraceSingle_ReturnValue_6, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_12, float CallFunc_SelectFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_24, float CallFunc_Multiply_FloatFloat_ReturnValue_25, float CallFunc_SelectFloat_ReturnValue_8, const struct FVector& CallFunc_MakeVector_ReturnValue_40, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_24, const struct FVector& CallFunc_MakeVector_ReturnValue_41, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_13, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_25, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_7, bool CallFunc_BoxTraceSingle_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_26, float CallFunc_Multiply_FloatFloat_ReturnValue_27, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_14, const struct FVector& CallFunc_MakeVector_ReturnValue_42, const struct FVector& CallFunc_MakeVector_ReturnValue_43, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_26, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_27, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_8, bool CallFunc_BoxTraceSingle_ReturnValue_8, float CallFunc_SelectFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_28, float CallFunc_Multiply_FloatFloat_ReturnValue_29, TArray<class AActor*>& Temp_object_Variable_20, const struct FVector& CallFunc_MakeVector_ReturnValue_44, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_9, bool CallFunc_BoxTraceSingle_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_28, float CallFunc_SelectFloat_ReturnValue_10, const struct FVector& CallFunc_MakeVector_ReturnValue_45, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_29, TArray<class AActor*>& Temp_object_Variable_21, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_10, bool CallFunc_BoxTraceSingle_ReturnValue_10, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_11, bool CallFunc_BoxTraceSingle_ReturnValue_11, float CallFunc_SelectFloat_ReturnValue_11, float CallFunc_SelectFloat_ReturnValue_12, const struct FVector& CallFunc_MakeVector_ReturnValue_46, const struct FVector& CallFunc_MakeVector_ReturnValue_47, const struct FVector& CallFunc_MakeVector_ReturnValue_48, const struct FVector& CallFunc_MakeVector_ReturnValue_49, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_15, const struct FVector& CallFunc_MakeVector_ReturnValue_50, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_16, float CallFunc_Multiply_FloatFloat_ReturnValue_30, float CallFunc_Multiply_FloatFloat_ReturnValue_31, const struct FVector& CallFunc_MakeVector_ReturnValue_51, float CallFunc_Multiply_FloatFloat_ReturnValue_32, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_30, float CallFunc_Multiply_FloatFloat_ReturnValue_33, const struct FVector& CallFunc_MakeVector_ReturnValue_52, const struct FVector& CallFunc_MakeVector_ReturnValue_53, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_31, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_32, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_12, bool CallFunc_BoxTraceSingle_ReturnValue_12, const struct FVector& CallFunc_MakeVector_ReturnValue_54, float CallFunc_SelectFloat_ReturnValue_13, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_33, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_13, bool CallFunc_BoxTraceSingle_ReturnValue_13, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_17, float CallFunc_SelectFloat_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_34, float CallFunc_Multiply_FloatFloat_ReturnValue_35, float CallFunc_SelectFloat_ReturnValue_15, const struct FVector& CallFunc_MakeVector_ReturnValue_55, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_34, const struct FVector& CallFunc_MakeVector_ReturnValue_56, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_18, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_35, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_14, bool CallFunc_BoxTraceSingle_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_36, float CallFunc_Multiply_FloatFloat_ReturnValue_37, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_19, const struct FVector& CallFunc_MakeVector_ReturnValue_57, const struct FVector& CallFunc_MakeVector_ReturnValue_58, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_36, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_37, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_15, bool CallFunc_BoxTraceSingle_ReturnValue_15, float CallFunc_SelectFloat_ReturnValue_16, float CallFunc_Multiply_FloatFloat_ReturnValue_38, float CallFunc_Multiply_FloatFloat_ReturnValue_39, TArray<class AActor*>& Temp_object_Variable_22, const struct FVector& CallFunc_MakeVector_ReturnValue_59, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_16, bool CallFunc_BoxTraceSingle_ReturnValue_16, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_38, const struct FVector& CallFunc_MakeVector_ReturnValue_60, TArray<class AActor*>& Temp_object_Variable_23, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_39, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_17, bool CallFunc_BoxTraceSingle_ReturnValue_17, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_18, bool CallFunc_BoxTraceSingle_ReturnValue_18, float CallFunc_SelectFloat_ReturnValue_17, float CallFunc_SelectFloat_ReturnValue_18, TArray<class AActor*>& Temp_object_Variable_24, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_19, bool CallFunc_BoxTraceSingle_ReturnValue_19, const struct FVector& CallFunc_MakeVector_ReturnValue_61, float CallFunc_SelectFloat_ReturnValue_19, const struct FVector& CallFunc_MakeVector_ReturnValue_62, const struct FVector& CallFunc_MakeVector_ReturnValue_63, const struct FVector& CallFunc_MakeVector_ReturnValue_64, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_20, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_21, float CallFunc_Multiply_FloatFloat_ReturnValue_40, float CallFunc_Multiply_FloatFloat_ReturnValue_41, const struct FVector& CallFunc_MakeVector_ReturnValue_65, float CallFunc_Multiply_FloatFloat_ReturnValue_42, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_40, float CallFunc_Multiply_FloatFloat_ReturnValue_43, const struct FVector& CallFunc_MakeVector_ReturnValue_66, const struct FVector& CallFunc_MakeVector_ReturnValue_67, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_41, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_42, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_20, bool CallFunc_BoxTraceSingle_ReturnValue_20, const struct FVector& CallFunc_MakeVector_ReturnValue_68, float CallFunc_SelectFloat_ReturnValue_20, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_43, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_21, bool CallFunc_BoxTraceSingle_ReturnValue_21, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_22, float CallFunc_SelectFloat_ReturnValue_21, float CallFunc_Multiply_FloatFloat_ReturnValue_44, float CallFunc_Multiply_FloatFloat_ReturnValue_45, float CallFunc_SelectFloat_ReturnValue_22, const struct FVector& CallFunc_MakeVector_ReturnValue_69, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_44, const struct FVector& CallFunc_MakeVector_ReturnValue_70, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_23, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_45, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_22, bool CallFunc_BoxTraceSingle_ReturnValue_22, float CallFunc_Multiply_FloatFloat_ReturnValue_46, float CallFunc_Multiply_FloatFloat_ReturnValue_47, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_24, const struct FVector& CallFunc_MakeVector_ReturnValue_71, const struct FVector& CallFunc_MakeVector_ReturnValue_72, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_46, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_47, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_23, bool CallFunc_BoxTraceSingle_ReturnValue_23, float CallFunc_SelectFloat_ReturnValue_23, float CallFunc_Multiply_FloatFloat_ReturnValue_48, float CallFunc_Multiply_FloatFloat_ReturnValue_49, const struct FVector& CallFunc_MakeVector_ReturnValue_73, const struct FVector& CallFunc_MakeVector_ReturnValue_74, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_48, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_49, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit_24, bool CallFunc_BoxTraceSingle_ReturnValue_24, float CallFunc_SelectFloat_ReturnValue_24)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "WeatherCaptureGrid");

	Params::UBP_PlayerEffectsComponent_C_WeatherCaptureGrid_Params Parms{};

	Parms.WeatherCullGridTraceSize2 = WeatherCullGridTraceSize2;
	Parms.WeatherCullGridSize2 = WeatherCullGridSize2;
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
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation = CallFunc_GetEffectTargetLocation_TargetLocation;
	Parms.CallFunc_MakeVector_ReturnValue_5 = CallFunc_MakeVector_ReturnValue_5;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_1 = CallFunc_GetEffectTargetLocation_TargetLocation_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_6 = CallFunc_MakeVector_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_7 = CallFunc_MakeVector_ReturnValue_7;
	Parms.CallFunc_MakeVector_ReturnValue_8 = CallFunc_MakeVector_ReturnValue_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_9 = CallFunc_MakeVector_ReturnValue_9;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_2 = CallFunc_GetEffectTargetLocation_TargetLocation_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_3 = CallFunc_GetEffectTargetLocation_TargetLocation_3;
	Parms.CallFunc_MakeVector_ReturnValue_10 = CallFunc_MakeVector_ReturnValue_10;
	Parms.CallFunc_MakeVector_ReturnValue_11 = CallFunc_MakeVector_ReturnValue_11;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = CallFunc_Add_VectorVector_ReturnValue_5;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_4 = CallFunc_GetEffectTargetLocation_TargetLocation_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_MakeVector_ReturnValue_12 = CallFunc_MakeVector_ReturnValue_12;
	Parms.CallFunc_MakeVector_ReturnValue_13 = CallFunc_MakeVector_ReturnValue_13;
	Parms.CallFunc_Add_VectorVector_ReturnValue_6 = CallFunc_Add_VectorVector_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue_7 = CallFunc_Add_VectorVector_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_MakeVector_ReturnValue_14 = CallFunc_MakeVector_ReturnValue_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MakeVector_ReturnValue_15 = CallFunc_MakeVector_ReturnValue_15;
	Parms.CallFunc_MakeVector_ReturnValue_16 = CallFunc_MakeVector_ReturnValue_16;
	Parms.CallFunc_Add_VectorVector_ReturnValue_8 = CallFunc_Add_VectorVector_ReturnValue_8;
	Parms.CallFunc_MakeVector_ReturnValue_17 = CallFunc_MakeVector_ReturnValue_17;
	Parms.CallFunc_Add_VectorVector_ReturnValue_9 = CallFunc_Add_VectorVector_ReturnValue_9;
	Parms.CallFunc_MakeVector_ReturnValue_18 = CallFunc_MakeVector_ReturnValue_18;
	Parms.CallFunc_MakeVector_ReturnValue_19 = CallFunc_MakeVector_ReturnValue_19;
	Parms.CallFunc_MakeVector_ReturnValue_20 = CallFunc_MakeVector_ReturnValue_20;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_5 = CallFunc_GetEffectTargetLocation_TargetLocation_5;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_6 = CallFunc_GetEffectTargetLocation_TargetLocation_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_MakeVector_ReturnValue_21 = CallFunc_MakeVector_ReturnValue_21;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Add_VectorVector_ReturnValue_10 = CallFunc_Add_VectorVector_ReturnValue_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_MakeVector_ReturnValue_22 = CallFunc_MakeVector_ReturnValue_22;
	Parms.CallFunc_MakeVector_ReturnValue_23 = CallFunc_MakeVector_ReturnValue_23;
	Parms.CallFunc_Add_VectorVector_ReturnValue_11 = CallFunc_Add_VectorVector_ReturnValue_11;
	Parms.CallFunc_Add_VectorVector_ReturnValue_12 = CallFunc_Add_VectorVector_ReturnValue_12;
	Parms.CallFunc_BoxTraceSingle_OutHit = CallFunc_BoxTraceSingle_OutHit;
	Parms.CallFunc_BoxTraceSingle_ReturnValue = CallFunc_BoxTraceSingle_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_24 = CallFunc_MakeVector_ReturnValue_24;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_13 = CallFunc_Add_VectorVector_ReturnValue_13;
	Parms.CallFunc_BoxTraceSingle_OutHit_1 = CallFunc_BoxTraceSingle_OutHit_1;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_1 = CallFunc_BoxTraceSingle_ReturnValue_1;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_7 = CallFunc_GetEffectTargetLocation_TargetLocation_7;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_14 = CallFunc_Multiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_15 = CallFunc_Multiply_FloatFloat_ReturnValue_15;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_25 = CallFunc_MakeVector_ReturnValue_25;
	Parms.CallFunc_Add_VectorVector_ReturnValue_14 = CallFunc_Add_VectorVector_ReturnValue_14;
	Parms.CallFunc_MakeVector_ReturnValue_26 = CallFunc_MakeVector_ReturnValue_26;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_8 = CallFunc_GetEffectTargetLocation_TargetLocation_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue_15 = CallFunc_Add_VectorVector_ReturnValue_15;
	Parms.CallFunc_BoxTraceSingle_OutHit_2 = CallFunc_BoxTraceSingle_OutHit_2;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_2 = CallFunc_BoxTraceSingle_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_16 = CallFunc_Multiply_FloatFloat_ReturnValue_16;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_17 = CallFunc_Multiply_FloatFloat_ReturnValue_17;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_9 = CallFunc_GetEffectTargetLocation_TargetLocation_9;
	Parms.CallFunc_MakeVector_ReturnValue_27 = CallFunc_MakeVector_ReturnValue_27;
	Parms.CallFunc_MakeVector_ReturnValue_28 = CallFunc_MakeVector_ReturnValue_28;
	Parms.CallFunc_Add_VectorVector_ReturnValue_16 = CallFunc_Add_VectorVector_ReturnValue_16;
	Parms.CallFunc_Add_VectorVector_ReturnValue_17 = CallFunc_Add_VectorVector_ReturnValue_17;
	Parms.CallFunc_BoxTraceSingle_OutHit_3 = CallFunc_BoxTraceSingle_OutHit_3;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_3 = CallFunc_BoxTraceSingle_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_18 = CallFunc_Multiply_FloatFloat_ReturnValue_18;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_19 = CallFunc_Multiply_FloatFloat_ReturnValue_19;
	Parms.CallFunc_MakeVector_ReturnValue_29 = CallFunc_MakeVector_ReturnValue_29;
	Parms.CallFunc_MakeVector_ReturnValue_30 = CallFunc_MakeVector_ReturnValue_30;
	Parms.CallFunc_Add_VectorVector_ReturnValue_18 = CallFunc_Add_VectorVector_ReturnValue_18;
	Parms.CallFunc_MakeVector_ReturnValue_31 = CallFunc_MakeVector_ReturnValue_31;
	Parms.CallFunc_Add_VectorVector_ReturnValue_19 = CallFunc_Add_VectorVector_ReturnValue_19;
	Parms.CallFunc_MakeVector_ReturnValue_32 = CallFunc_MakeVector_ReturnValue_32;
	Parms.CallFunc_BoxTraceSingle_OutHit_4 = CallFunc_BoxTraceSingle_OutHit_4;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_4 = CallFunc_BoxTraceSingle_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_MakeVector_ReturnValue_33 = CallFunc_MakeVector_ReturnValue_33;
	Parms.CallFunc_MakeVector_ReturnValue_34 = CallFunc_MakeVector_ReturnValue_34;
	Parms.CallFunc_MakeVector_ReturnValue_35 = CallFunc_MakeVector_ReturnValue_35;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_10 = CallFunc_GetEffectTargetLocation_TargetLocation_10;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_11 = CallFunc_GetEffectTargetLocation_TargetLocation_11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_20 = CallFunc_Multiply_FloatFloat_ReturnValue_20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_21 = CallFunc_Multiply_FloatFloat_ReturnValue_21;
	Parms.CallFunc_MakeVector_ReturnValue_36 = CallFunc_MakeVector_ReturnValue_36;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_22 = CallFunc_Multiply_FloatFloat_ReturnValue_22;
	Parms.CallFunc_Add_VectorVector_ReturnValue_20 = CallFunc_Add_VectorVector_ReturnValue_20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_23 = CallFunc_Multiply_FloatFloat_ReturnValue_23;
	Parms.CallFunc_MakeVector_ReturnValue_37 = CallFunc_MakeVector_ReturnValue_37;
	Parms.CallFunc_MakeVector_ReturnValue_38 = CallFunc_MakeVector_ReturnValue_38;
	Parms.CallFunc_Add_VectorVector_ReturnValue_21 = CallFunc_Add_VectorVector_ReturnValue_21;
	Parms.CallFunc_Add_VectorVector_ReturnValue_22 = CallFunc_Add_VectorVector_ReturnValue_22;
	Parms.CallFunc_BoxTraceSingle_OutHit_5 = CallFunc_BoxTraceSingle_OutHit_5;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_5 = CallFunc_BoxTraceSingle_ReturnValue_5;
	Parms.CallFunc_MakeVector_ReturnValue_39 = CallFunc_MakeVector_ReturnValue_39;
	Parms.CallFunc_SelectFloat_ReturnValue_6 = CallFunc_SelectFloat_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue_23 = CallFunc_Add_VectorVector_ReturnValue_23;
	Parms.CallFunc_BoxTraceSingle_OutHit_6 = CallFunc_BoxTraceSingle_OutHit_6;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_6 = CallFunc_BoxTraceSingle_ReturnValue_6;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_12 = CallFunc_GetEffectTargetLocation_TargetLocation_12;
	Parms.CallFunc_SelectFloat_ReturnValue_7 = CallFunc_SelectFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_24 = CallFunc_Multiply_FloatFloat_ReturnValue_24;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_25 = CallFunc_Multiply_FloatFloat_ReturnValue_25;
	Parms.CallFunc_SelectFloat_ReturnValue_8 = CallFunc_SelectFloat_ReturnValue_8;
	Parms.CallFunc_MakeVector_ReturnValue_40 = CallFunc_MakeVector_ReturnValue_40;
	Parms.CallFunc_Add_VectorVector_ReturnValue_24 = CallFunc_Add_VectorVector_ReturnValue_24;
	Parms.CallFunc_MakeVector_ReturnValue_41 = CallFunc_MakeVector_ReturnValue_41;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_13 = CallFunc_GetEffectTargetLocation_TargetLocation_13;
	Parms.CallFunc_Add_VectorVector_ReturnValue_25 = CallFunc_Add_VectorVector_ReturnValue_25;
	Parms.CallFunc_BoxTraceSingle_OutHit_7 = CallFunc_BoxTraceSingle_OutHit_7;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_7 = CallFunc_BoxTraceSingle_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_26 = CallFunc_Multiply_FloatFloat_ReturnValue_26;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_27 = CallFunc_Multiply_FloatFloat_ReturnValue_27;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_14 = CallFunc_GetEffectTargetLocation_TargetLocation_14;
	Parms.CallFunc_MakeVector_ReturnValue_42 = CallFunc_MakeVector_ReturnValue_42;
	Parms.CallFunc_MakeVector_ReturnValue_43 = CallFunc_MakeVector_ReturnValue_43;
	Parms.CallFunc_Add_VectorVector_ReturnValue_26 = CallFunc_Add_VectorVector_ReturnValue_26;
	Parms.CallFunc_Add_VectorVector_ReturnValue_27 = CallFunc_Add_VectorVector_ReturnValue_27;
	Parms.CallFunc_BoxTraceSingle_OutHit_8 = CallFunc_BoxTraceSingle_OutHit_8;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_8 = CallFunc_BoxTraceSingle_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_9 = CallFunc_SelectFloat_ReturnValue_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_28 = CallFunc_Multiply_FloatFloat_ReturnValue_28;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_29 = CallFunc_Multiply_FloatFloat_ReturnValue_29;
	Parms.Temp_object_Variable_20 = Temp_object_Variable_20;
	Parms.CallFunc_MakeVector_ReturnValue_44 = CallFunc_MakeVector_ReturnValue_44;
	Parms.CallFunc_BoxTraceSingle_OutHit_9 = CallFunc_BoxTraceSingle_OutHit_9;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_9 = CallFunc_BoxTraceSingle_ReturnValue_9;
	Parms.CallFunc_Add_VectorVector_ReturnValue_28 = CallFunc_Add_VectorVector_ReturnValue_28;
	Parms.CallFunc_SelectFloat_ReturnValue_10 = CallFunc_SelectFloat_ReturnValue_10;
	Parms.CallFunc_MakeVector_ReturnValue_45 = CallFunc_MakeVector_ReturnValue_45;
	Parms.CallFunc_Add_VectorVector_ReturnValue_29 = CallFunc_Add_VectorVector_ReturnValue_29;
	Parms.Temp_object_Variable_21 = Temp_object_Variable_21;
	Parms.CallFunc_BoxTraceSingle_OutHit_10 = CallFunc_BoxTraceSingle_OutHit_10;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_10 = CallFunc_BoxTraceSingle_ReturnValue_10;
	Parms.CallFunc_BoxTraceSingle_OutHit_11 = CallFunc_BoxTraceSingle_OutHit_11;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_11 = CallFunc_BoxTraceSingle_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_11 = CallFunc_SelectFloat_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_12 = CallFunc_SelectFloat_ReturnValue_12;
	Parms.CallFunc_MakeVector_ReturnValue_46 = CallFunc_MakeVector_ReturnValue_46;
	Parms.CallFunc_MakeVector_ReturnValue_47 = CallFunc_MakeVector_ReturnValue_47;
	Parms.CallFunc_MakeVector_ReturnValue_48 = CallFunc_MakeVector_ReturnValue_48;
	Parms.CallFunc_MakeVector_ReturnValue_49 = CallFunc_MakeVector_ReturnValue_49;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_15 = CallFunc_GetEffectTargetLocation_TargetLocation_15;
	Parms.CallFunc_MakeVector_ReturnValue_50 = CallFunc_MakeVector_ReturnValue_50;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_16 = CallFunc_GetEffectTargetLocation_TargetLocation_16;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_30 = CallFunc_Multiply_FloatFloat_ReturnValue_30;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_31 = CallFunc_Multiply_FloatFloat_ReturnValue_31;
	Parms.CallFunc_MakeVector_ReturnValue_51 = CallFunc_MakeVector_ReturnValue_51;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_32 = CallFunc_Multiply_FloatFloat_ReturnValue_32;
	Parms.CallFunc_Add_VectorVector_ReturnValue_30 = CallFunc_Add_VectorVector_ReturnValue_30;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_33 = CallFunc_Multiply_FloatFloat_ReturnValue_33;
	Parms.CallFunc_MakeVector_ReturnValue_52 = CallFunc_MakeVector_ReturnValue_52;
	Parms.CallFunc_MakeVector_ReturnValue_53 = CallFunc_MakeVector_ReturnValue_53;
	Parms.CallFunc_Add_VectorVector_ReturnValue_31 = CallFunc_Add_VectorVector_ReturnValue_31;
	Parms.CallFunc_Add_VectorVector_ReturnValue_32 = CallFunc_Add_VectorVector_ReturnValue_32;
	Parms.CallFunc_BoxTraceSingle_OutHit_12 = CallFunc_BoxTraceSingle_OutHit_12;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_12 = CallFunc_BoxTraceSingle_ReturnValue_12;
	Parms.CallFunc_MakeVector_ReturnValue_54 = CallFunc_MakeVector_ReturnValue_54;
	Parms.CallFunc_SelectFloat_ReturnValue_13 = CallFunc_SelectFloat_ReturnValue_13;
	Parms.CallFunc_Add_VectorVector_ReturnValue_33 = CallFunc_Add_VectorVector_ReturnValue_33;
	Parms.CallFunc_BoxTraceSingle_OutHit_13 = CallFunc_BoxTraceSingle_OutHit_13;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_13 = CallFunc_BoxTraceSingle_ReturnValue_13;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_17 = CallFunc_GetEffectTargetLocation_TargetLocation_17;
	Parms.CallFunc_SelectFloat_ReturnValue_14 = CallFunc_SelectFloat_ReturnValue_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_34 = CallFunc_Multiply_FloatFloat_ReturnValue_34;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_35 = CallFunc_Multiply_FloatFloat_ReturnValue_35;
	Parms.CallFunc_SelectFloat_ReturnValue_15 = CallFunc_SelectFloat_ReturnValue_15;
	Parms.CallFunc_MakeVector_ReturnValue_55 = CallFunc_MakeVector_ReturnValue_55;
	Parms.CallFunc_Add_VectorVector_ReturnValue_34 = CallFunc_Add_VectorVector_ReturnValue_34;
	Parms.CallFunc_MakeVector_ReturnValue_56 = CallFunc_MakeVector_ReturnValue_56;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_18 = CallFunc_GetEffectTargetLocation_TargetLocation_18;
	Parms.CallFunc_Add_VectorVector_ReturnValue_35 = CallFunc_Add_VectorVector_ReturnValue_35;
	Parms.CallFunc_BoxTraceSingle_OutHit_14 = CallFunc_BoxTraceSingle_OutHit_14;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_14 = CallFunc_BoxTraceSingle_ReturnValue_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_36 = CallFunc_Multiply_FloatFloat_ReturnValue_36;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_37 = CallFunc_Multiply_FloatFloat_ReturnValue_37;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_19 = CallFunc_GetEffectTargetLocation_TargetLocation_19;
	Parms.CallFunc_MakeVector_ReturnValue_57 = CallFunc_MakeVector_ReturnValue_57;
	Parms.CallFunc_MakeVector_ReturnValue_58 = CallFunc_MakeVector_ReturnValue_58;
	Parms.CallFunc_Add_VectorVector_ReturnValue_36 = CallFunc_Add_VectorVector_ReturnValue_36;
	Parms.CallFunc_Add_VectorVector_ReturnValue_37 = CallFunc_Add_VectorVector_ReturnValue_37;
	Parms.CallFunc_BoxTraceSingle_OutHit_15 = CallFunc_BoxTraceSingle_OutHit_15;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_15 = CallFunc_BoxTraceSingle_ReturnValue_15;
	Parms.CallFunc_SelectFloat_ReturnValue_16 = CallFunc_SelectFloat_ReturnValue_16;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_38 = CallFunc_Multiply_FloatFloat_ReturnValue_38;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_39 = CallFunc_Multiply_FloatFloat_ReturnValue_39;
	Parms.Temp_object_Variable_22 = Temp_object_Variable_22;
	Parms.CallFunc_MakeVector_ReturnValue_59 = CallFunc_MakeVector_ReturnValue_59;
	Parms.CallFunc_BoxTraceSingle_OutHit_16 = CallFunc_BoxTraceSingle_OutHit_16;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_16 = CallFunc_BoxTraceSingle_ReturnValue_16;
	Parms.CallFunc_Add_VectorVector_ReturnValue_38 = CallFunc_Add_VectorVector_ReturnValue_38;
	Parms.CallFunc_MakeVector_ReturnValue_60 = CallFunc_MakeVector_ReturnValue_60;
	Parms.Temp_object_Variable_23 = Temp_object_Variable_23;
	Parms.CallFunc_Add_VectorVector_ReturnValue_39 = CallFunc_Add_VectorVector_ReturnValue_39;
	Parms.CallFunc_BoxTraceSingle_OutHit_17 = CallFunc_BoxTraceSingle_OutHit_17;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_17 = CallFunc_BoxTraceSingle_ReturnValue_17;
	Parms.CallFunc_BoxTraceSingle_OutHit_18 = CallFunc_BoxTraceSingle_OutHit_18;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_18 = CallFunc_BoxTraceSingle_ReturnValue_18;
	Parms.CallFunc_SelectFloat_ReturnValue_17 = CallFunc_SelectFloat_ReturnValue_17;
	Parms.CallFunc_SelectFloat_ReturnValue_18 = CallFunc_SelectFloat_ReturnValue_18;
	Parms.Temp_object_Variable_24 = Temp_object_Variable_24;
	Parms.CallFunc_BoxTraceSingle_OutHit_19 = CallFunc_BoxTraceSingle_OutHit_19;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_19 = CallFunc_BoxTraceSingle_ReturnValue_19;
	Parms.CallFunc_MakeVector_ReturnValue_61 = CallFunc_MakeVector_ReturnValue_61;
	Parms.CallFunc_SelectFloat_ReturnValue_19 = CallFunc_SelectFloat_ReturnValue_19;
	Parms.CallFunc_MakeVector_ReturnValue_62 = CallFunc_MakeVector_ReturnValue_62;
	Parms.CallFunc_MakeVector_ReturnValue_63 = CallFunc_MakeVector_ReturnValue_63;
	Parms.CallFunc_MakeVector_ReturnValue_64 = CallFunc_MakeVector_ReturnValue_64;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_20 = CallFunc_GetEffectTargetLocation_TargetLocation_20;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_21 = CallFunc_GetEffectTargetLocation_TargetLocation_21;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_40 = CallFunc_Multiply_FloatFloat_ReturnValue_40;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_41 = CallFunc_Multiply_FloatFloat_ReturnValue_41;
	Parms.CallFunc_MakeVector_ReturnValue_65 = CallFunc_MakeVector_ReturnValue_65;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_42 = CallFunc_Multiply_FloatFloat_ReturnValue_42;
	Parms.CallFunc_Add_VectorVector_ReturnValue_40 = CallFunc_Add_VectorVector_ReturnValue_40;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_43 = CallFunc_Multiply_FloatFloat_ReturnValue_43;
	Parms.CallFunc_MakeVector_ReturnValue_66 = CallFunc_MakeVector_ReturnValue_66;
	Parms.CallFunc_MakeVector_ReturnValue_67 = CallFunc_MakeVector_ReturnValue_67;
	Parms.CallFunc_Add_VectorVector_ReturnValue_41 = CallFunc_Add_VectorVector_ReturnValue_41;
	Parms.CallFunc_Add_VectorVector_ReturnValue_42 = CallFunc_Add_VectorVector_ReturnValue_42;
	Parms.CallFunc_BoxTraceSingle_OutHit_20 = CallFunc_BoxTraceSingle_OutHit_20;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_20 = CallFunc_BoxTraceSingle_ReturnValue_20;
	Parms.CallFunc_MakeVector_ReturnValue_68 = CallFunc_MakeVector_ReturnValue_68;
	Parms.CallFunc_SelectFloat_ReturnValue_20 = CallFunc_SelectFloat_ReturnValue_20;
	Parms.CallFunc_Add_VectorVector_ReturnValue_43 = CallFunc_Add_VectorVector_ReturnValue_43;
	Parms.CallFunc_BoxTraceSingle_OutHit_21 = CallFunc_BoxTraceSingle_OutHit_21;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_21 = CallFunc_BoxTraceSingle_ReturnValue_21;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_22 = CallFunc_GetEffectTargetLocation_TargetLocation_22;
	Parms.CallFunc_SelectFloat_ReturnValue_21 = CallFunc_SelectFloat_ReturnValue_21;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_44 = CallFunc_Multiply_FloatFloat_ReturnValue_44;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_45 = CallFunc_Multiply_FloatFloat_ReturnValue_45;
	Parms.CallFunc_SelectFloat_ReturnValue_22 = CallFunc_SelectFloat_ReturnValue_22;
	Parms.CallFunc_MakeVector_ReturnValue_69 = CallFunc_MakeVector_ReturnValue_69;
	Parms.CallFunc_Add_VectorVector_ReturnValue_44 = CallFunc_Add_VectorVector_ReturnValue_44;
	Parms.CallFunc_MakeVector_ReturnValue_70 = CallFunc_MakeVector_ReturnValue_70;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_23 = CallFunc_GetEffectTargetLocation_TargetLocation_23;
	Parms.CallFunc_Add_VectorVector_ReturnValue_45 = CallFunc_Add_VectorVector_ReturnValue_45;
	Parms.CallFunc_BoxTraceSingle_OutHit_22 = CallFunc_BoxTraceSingle_OutHit_22;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_22 = CallFunc_BoxTraceSingle_ReturnValue_22;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_46 = CallFunc_Multiply_FloatFloat_ReturnValue_46;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_47 = CallFunc_Multiply_FloatFloat_ReturnValue_47;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_24 = CallFunc_GetEffectTargetLocation_TargetLocation_24;
	Parms.CallFunc_MakeVector_ReturnValue_71 = CallFunc_MakeVector_ReturnValue_71;
	Parms.CallFunc_MakeVector_ReturnValue_72 = CallFunc_MakeVector_ReturnValue_72;
	Parms.CallFunc_Add_VectorVector_ReturnValue_46 = CallFunc_Add_VectorVector_ReturnValue_46;
	Parms.CallFunc_Add_VectorVector_ReturnValue_47 = CallFunc_Add_VectorVector_ReturnValue_47;
	Parms.CallFunc_BoxTraceSingle_OutHit_23 = CallFunc_BoxTraceSingle_OutHit_23;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_23 = CallFunc_BoxTraceSingle_ReturnValue_23;
	Parms.CallFunc_SelectFloat_ReturnValue_23 = CallFunc_SelectFloat_ReturnValue_23;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_48 = CallFunc_Multiply_FloatFloat_ReturnValue_48;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_49 = CallFunc_Multiply_FloatFloat_ReturnValue_49;
	Parms.CallFunc_MakeVector_ReturnValue_73 = CallFunc_MakeVector_ReturnValue_73;
	Parms.CallFunc_MakeVector_ReturnValue_74 = CallFunc_MakeVector_ReturnValue_74;
	Parms.CallFunc_Add_VectorVector_ReturnValue_48 = CallFunc_Add_VectorVector_ReturnValue_48;
	Parms.CallFunc_Add_VectorVector_ReturnValue_49 = CallFunc_Add_VectorVector_ReturnValue_49;
	Parms.CallFunc_BoxTraceSingle_OutHit_24 = CallFunc_BoxTraceSingle_OutHit_24;
	Parms.CallFunc_BoxTraceSingle_ReturnValue_24 = CallFunc_BoxTraceSingle_ReturnValue_24;
	Parms.CallFunc_SelectFloat_ReturnValue_24 = CallFunc_SelectFloat_ReturnValue_24;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.ToggleAllStormNFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEffectsComponent_C::ToggleAllStormNFX(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "ToggleAllStormNFX");

	Params::UBP_PlayerEffectsComponent_C_ToggleAllStormNFX_Params Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.DisablePPDebrisEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::DisablePPDebrisEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "DisablePPDebrisEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickWeatherEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Event_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NFX_                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEffectsComponent_C::TickWeatherEvent(float Event_Name, class UNiagaraComponent* NFX_, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickWeatherEvent");

	Params::UBP_PlayerEffectsComponent_C_TickWeatherEvent_Params Parms{};

	Parms.Event_Name = Event_Name;
	Parms.NFX_ = NFX_;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation = CallFunc_GetEffectTargetLocation_TargetLocation;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.Calculate Desired Fire Intensity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DesiredFireIntensity2                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FlammableInstanceDistance                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaxFloat_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADisasterController*         CallFunc_GetDisasterController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCombustionMaximumTemperature_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCombustionTemperature_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetFlammableLocalBounds_ReturnValue                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeXY_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetFlammableWorldTransform_ReturnValue                  (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeXY_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::Calculate_Desired_Fire_Intensity(float DeltaSeconds, const struct FVector& PlayerLocation, float DesiredFireIntensity2, float FlammableInstanceDistance, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_MaxFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFlammableInstance* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetCombustionMaximumTemperature_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetCombustionTemperature_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetFlammableLocalBounds_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_VSizeXY_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FTransform& CallFunc_GetFlammableWorldTransform_ReturnValue, bool CallFunc_IsCurrentState_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeXY_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "Calculate Desired Fire Intensity");

	Params::UBP_PlayerEffectsComponent_C_Calculate_Desired_Fire_Intensity_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.PlayerLocation = PlayerLocation;
	Parms.DesiredFireIntensity2 = DesiredFireIntensity2;
	Parms.FlammableInstanceDistance = FlammableInstanceDistance;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MaxFloat_ReturnValue = CallFunc_MaxFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetDisasterController_ReturnValue = CallFunc_GetDisasterController_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCombustionMaximumTemperature_ReturnValue = CallFunc_GetCombustionMaximumTemperature_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCombustionTemperature_ReturnValue = CallFunc_GetCombustionTemperature_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetFlammableLocalBounds_ReturnValue = CallFunc_GetFlammableLocalBounds_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetFlammableWorldTransform_ReturnValue = CallFunc_GetFlammableWorldTransform_ReturnValue;
	Parms.CallFunc_IsCurrentState_ReturnValue = CallFunc_IsCurrentState_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSizeXY_ReturnValue_1 = CallFunc_VSizeXY_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.Is Sheltered
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Sheltered                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEffectsComponent_C::Is_Sheltered(bool* Sheltered, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "Is Sheltered");

	Params::UBP_PlayerEffectsComponent_C_Is_Sheltered_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation = CallFunc_GetEffectTargetLocation_TargetLocation;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sheltered != nullptr)
		*Sheltered = Parms.Sheltered;

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.CreateCosmeticLightningStrike
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StrikeLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FX_ThunderStrike_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::CreateCosmeticLightningStrike(const struct FVector& StrikeLocation, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_SetStaticMesh_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FX_ThunderStrike_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "CreateCosmeticLightningStrike");

	Params::UBP_PlayerEffectsComponent_C_CreateCosmeticLightningStrike_Params Parms{};

	Parms.StrikeLocation = StrikeLocation;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.DES_TraceAroundPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RangeMin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RangeMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegCos_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegSin_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_PlayerEffectsComponent_C::DES_TraceAroundPlayer(float FOV, float RangeMin, float RangeMax, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_RandomFloatInRange_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_DegCos_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "DES_TraceAroundPlayer");

	Params::UBP_PlayerEffectsComponent_C_DES_TraceAroundPlayer_Params Parms{};

	Parms.FOV = FOV;
	Parms.RangeMin = RangeMin;
	Parms.RangeMax = RangeMax;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation = CallFunc_GetEffectTargetLocation_TargetLocation;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_DegCos_ReturnValue = CallFunc_DegCos_ReturnValue;
	Parms.CallFunc_DegSin_ReturnValue = CallFunc_DegSin_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickDynamicEmitterSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DES_LastCheck                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DES_TraceAroundPlayer_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DES_TraceAroundPlayer_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::TickDynamicEmitterSystem(float DES_LastCheck, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_DES_TraceAroundPlayer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_DES_TraceAroundPlayer_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickDynamicEmitterSystem");

	Params::UBP_PlayerEffectsComponent_C_TickDynamicEmitterSystem_Params Parms{};

	Parms.DES_LastCheck = DES_LastCheck;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_DES_TraceAroundPlayer_ReturnValue = CallFunc_DES_TraceAroundPlayer_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_DES_TraceAroundPlayer_ReturnValue_1 = CallFunc_DES_TraceAroundPlayer_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
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
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;
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
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_2 = CallFunc_SpawnSystemAtLocation_ReturnValue_2;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_3 = CallFunc_SpawnSystemAtLocation_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickEmbers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickEmbers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickEmbers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickAshes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickAshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickAshes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickHail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickHail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickHail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickSmoke
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickSmoke()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickSmoke");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickMiscFx
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickMiscFx()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickMiscFx");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickLocalFogVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickLocalFogVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickLocalFogVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickWaterInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickWaterInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickWaterInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickStorms
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickStorms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickStorms");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickShelterCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickShelterCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickShelterCapture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickStormWall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickStormWall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickStormWall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEffectsComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "ReceiveTick");

	Params::UBP_PlayerEffectsComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickLightning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickLightning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickLightning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitShelterCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitShelterCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitShelterCapture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickSnow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitPostProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitPostProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitPostProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitRain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitSnow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitDistantFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitDistantFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitDistantFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitStorms
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitStorms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitStorms");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitMiscFx
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitMiscFx()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitMiscFx");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickRain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitLocalFogVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitLocalFogVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitLocalFogVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickAcid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::TickAcid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "TickAcid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.Initialise
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::Initialise()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "Initialise");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitTerrainDeformation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitTerrainDeformation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitTerrainDeformation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitAshes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitAshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitAshes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitEmber
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitEmber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitEmber");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitHail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitHail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitHail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitAcid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitAcid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitAcid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitSmoke
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerEffectsComponent_C::InitSmoke()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "InitSmoke");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.ExecuteUbergraph_BP_PlayerEffectsComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetEffectOwner_OwnerComponent                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Up_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Down_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayerVelocity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayerVelocity_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_10                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_11                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectTargetLocation_TargetLocation_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class ABP_Fx_StormWall_C*          CallFunc_SpawnActorOfClass_OutActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
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
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_1                            (NoDestructor)
// float                              CallFunc_GetTimeRealtime_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables_1                           (None)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_13                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector4                    K2Node_MakeStruct_Vector4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_2                            (NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_3                                         (ReferenceParm)
// float                              CallFunc_FClamp_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables_2                           (None)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FX_DistantFog_C*         CallFunc_SpawnActorOfClass_OutActor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_4                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_5                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_6                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_7                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FX_LocalFogVolume_C*     CallFunc_SpawnActorOfClass_OutActor_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_3                            (NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class ABP_FX_TerrainDeformationCapture_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables_3                           (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_4                            (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_5                                         (ReferenceParm)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables_4                           (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_8                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_9                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_10                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_11                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_12                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_13                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_14                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_15                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_5                            (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_6                                         (ReferenceParm)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables_5                           (None)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class UPostProcessComponent*       CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponentByClass_ReturnValue_5                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponentByClass_ReturnValue_6                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AtmosphereController_C*  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_GetEffectOwner_OwnerComponent_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetEffectOwner_OwnerComponent_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetEffectOwner_OwnerComponent_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_FX_ShelterCapture_C*     CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetEffectOwner_OwnerComponent_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEffectsComponent_C::ExecuteUbergraph_BP_PlayerEffectsComponent(int32 EntryPoint, class USceneComponent* CallFunc_GetEffectOwner_OwnerComponent, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_Lerp_ReturnValue, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_5, float CallFunc_Lerp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Lerp_ReturnValue_3, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, float CallFunc_Multiply_FloatFloat_ReturnValue_7, const struct FVector& CallFunc_Vector_Up_ReturnValue, const struct FVector& CallFunc_Vector_Down_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetPlayerVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetPlayerVelocity_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Lerp_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue_6, bool CallFunc_Greater_FloatFloat_ReturnValue_7, bool CallFunc_Greater_FloatFloat_ReturnValue_8, float CallFunc_FMax_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaSeconds, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Greater_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_10, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue_11, bool CallFunc_Greater_FloatFloat_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Lerp_ReturnValue_5, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_FClamp_ReturnValue_5, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_1, const struct FVector& CallFunc_GetEffectTargetLocation_TargetLocation_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABP_Fx_StormWall_C* CallFunc_SpawnActorOfClass_OutActor, const struct FRotator& CallFunc_MakeRotator_ReturnValue, TArray<class AActor*>& Temp_object_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_1, float CallFunc_GetTimeRealtime_ReturnValue, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_2, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, const struct FVector4& K2Node_MakeStruct_Vector4, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_10, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_2, float CallFunc_Lerp_ReturnValue_6, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_3, float CallFunc_FClamp_ReturnValue_6, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables_2, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_1, class ABP_FX_DistantFog_C* CallFunc_SpawnActorOfClass_OutActor_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_3, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_4, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_5, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_6, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_7, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_2, class ABP_FX_LocalFogVolume_C* CallFunc_SpawnActorOfClass_OutActor_2, bool CallFunc_IsValid_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_4, class ABP_FX_TerrainDeformationCapture_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_9, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_4, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_5, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables_4, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_8, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_9, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_10, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_11, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_12, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_13, bool Temp_bool_Has_Been_Initd_Variable, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_14, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_15, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_5, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_6, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables_5, bool CallFunc_IsValid_ReturnValue_10, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_11, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UPostProcessComponent* CallFunc_AddComponentByClass_ReturnValue, class UPostProcessComponent* CallFunc_AddComponentByClass_ReturnValue_1, class UPostProcessComponent* CallFunc_AddComponentByClass_ReturnValue_2, class UPostProcessComponent* CallFunc_AddComponentByClass_ReturnValue_3, class UPostProcessComponent* CallFunc_AddComponentByClass_ReturnValue_4, class UPostProcessComponent* CallFunc_AddComponentByClass_ReturnValue_5, class UPostProcessComponent* CallFunc_AddComponentByClass_ReturnValue_6, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, class ABP_AtmosphereController_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, class USceneComponent* CallFunc_GetEffectOwner_OwnerComponent_1, class USceneComponent* CallFunc_GetEffectOwner_OwnerComponent_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class USceneComponent* CallFunc_GetEffectOwner_OwnerComponent_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_FX_ShelterCapture_C* CallFunc_FinishSpawningActor_ReturnValue_1, class USceneComponent* CallFunc_GetEffectOwner_OwnerComponent_4, class AActor* CallFunc_GetOwner_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerEffectsComponent_C", "ExecuteUbergraph_BP_PlayerEffectsComponent");

	Params::UBP_PlayerEffectsComponent_C_ExecuteUbergraph_BP_PlayerEffectsComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEffectOwner_OwnerComponent = CallFunc_GetEffectOwner_OwnerComponent;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Vector_Up_ReturnValue = CallFunc_Vector_Up_ReturnValue;
	Parms.CallFunc_Vector_Down_ReturnValue = CallFunc_Vector_Down_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerVelocity_ReturnValue = CallFunc_GetPlayerVelocity_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetPlayerVelocity_ReturnValue_1 = CallFunc_GetPlayerVelocity_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_5 = CallFunc_Greater_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_6 = CallFunc_Greater_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_7 = CallFunc_Greater_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_8 = CallFunc_Greater_FloatFloat_ReturnValue_8;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_9 = CallFunc_Greater_FloatFloat_ReturnValue_9;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_10 = CallFunc_Greater_FloatFloat_ReturnValue_10;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_11 = CallFunc_Greater_FloatFloat_ReturnValue_11;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_12 = CallFunc_Greater_FloatFloat_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation = CallFunc_GetEffectTargetLocation_TargetLocation;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_1 = CallFunc_GetEffectTargetLocation_TargetLocation_1;
	Parms.CallFunc_GetEffectTargetLocation_TargetLocation_2 = CallFunc_GetEffectTargetLocation_TargetLocation_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_1 = CallFunc_K2_SetActorLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_1 = CallFunc_K2_SetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SpawnActorOfClass_OutActor = CallFunc_SpawnActorOfClass_OutActor;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_LineTraceSingleForObjects_OutHit = CallFunc_LineTraceSingleForObjects_OutHit;
	Parms.CallFunc_LineTraceSingleForObjects_ReturnValue = CallFunc_LineTraceSingleForObjects_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
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
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = CallFunc_Add_VectorVector_ReturnValue_5;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_2 = CallFunc_SpawnSystemAtLocation_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedBlendable_1 = K2Node_MakeStruct_WeightedBlendable_1;
	Parms.CallFunc_GetTimeRealtime_ReturnValue = CallFunc_GetTimeRealtime_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedBlendables_1 = K2Node_MakeStruct_WeightedBlendables_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_13 = CallFunc_Greater_FloatFloat_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_MakeStruct_Vector4 = K2Node_MakeStruct_Vector4;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.K2Node_MakeStruct_WeightedBlendable_2 = K2Node_MakeStruct_WeightedBlendable_2;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_FClamp_ReturnValue_6 = CallFunc_FClamp_ReturnValue_6;
	Parms.K2Node_MakeStruct_WeightedBlendables_2 = K2Node_MakeStruct_WeightedBlendables_2;
	Parms.CallFunc_GetWorldSettings_ReturnValue_1 = CallFunc_GetWorldSettings_ReturnValue_1;
	Parms.CallFunc_SpawnActorOfClass_OutActor_1 = CallFunc_SpawnActorOfClass_OutActor_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_3 = CallFunc_SpawnSystemAtLocation_ReturnValue_3;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_4 = CallFunc_SpawnSystemAtLocation_ReturnValue_4;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_5 = CallFunc_SpawnSystemAtLocation_ReturnValue_5;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_6 = CallFunc_SpawnSystemAtLocation_ReturnValue_6;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_7 = CallFunc_SpawnSystemAtLocation_ReturnValue_7;
	Parms.CallFunc_GetWorldSettings_ReturnValue_2 = CallFunc_GetWorldSettings_ReturnValue_2;
	Parms.CallFunc_SpawnActorOfClass_OutActor_2 = CallFunc_SpawnActorOfClass_OutActor_2;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue_1 = CallFunc_GetCameraLocation_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeightedBlendable_3 = K2Node_MakeStruct_WeightedBlendable_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedBlendables_3 = K2Node_MakeStruct_WeightedBlendables_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_MakeStruct_WeightedBlendable_4 = K2Node_MakeStruct_WeightedBlendable_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeStruct_WeightedBlendables_4 = K2Node_MakeStruct_WeightedBlendables_4;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_8 = CallFunc_SpawnSystemAtLocation_ReturnValue_8;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_9 = CallFunc_SpawnSystemAtLocation_ReturnValue_9;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_10 = CallFunc_SpawnSystemAtLocation_ReturnValue_10;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_11 = CallFunc_SpawnSystemAtLocation_ReturnValue_11;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_12 = CallFunc_SpawnSystemAtLocation_ReturnValue_12;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_13 = CallFunc_SpawnSystemAtLocation_ReturnValue_13;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_14 = CallFunc_SpawnSystemAtLocation_ReturnValue_14;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_15 = CallFunc_SpawnSystemAtLocation_ReturnValue_15;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	Parms.K2Node_MakeStruct_WeightedBlendable_5 = K2Node_MakeStruct_WeightedBlendable_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeStruct_WeightedBlendables_5 = K2Node_MakeStruct_WeightedBlendables_5;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue_1 = CallFunc_AddComponentByClass_ReturnValue_1;
	Parms.CallFunc_AddComponentByClass_ReturnValue_2 = CallFunc_AddComponentByClass_ReturnValue_2;
	Parms.CallFunc_AddComponentByClass_ReturnValue_3 = CallFunc_AddComponentByClass_ReturnValue_3;
	Parms.CallFunc_AddComponentByClass_ReturnValue_4 = CallFunc_AddComponentByClass_ReturnValue_4;
	Parms.CallFunc_AddComponentByClass_ReturnValue_5 = CallFunc_AddComponentByClass_ReturnValue_5;
	Parms.CallFunc_AddComponentByClass_ReturnValue_6 = CallFunc_AddComponentByClass_ReturnValue_6;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_GetEffectOwner_OwnerComponent_1 = CallFunc_GetEffectOwner_OwnerComponent_1;
	Parms.CallFunc_GetEffectOwner_OwnerComponent_2 = CallFunc_GetEffectOwner_OwnerComponent_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetEffectOwner_OwnerComponent_3 = CallFunc_GetEffectOwner_OwnerComponent_3;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetEffectOwner_OwnerComponent_4 = CallFunc_GetEffectOwner_OwnerComponent_4;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


