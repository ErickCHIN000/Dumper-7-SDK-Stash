#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C
// (Actor)

class UClass* ABP_CreatureCreatedObstacle_StonePillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureCreatedObstacle_StonePillar_C");

	return Clss;
}


// BP_CreatureCreatedObstacle_StonePillar_C BP_CreatureCreatedObstacle_StonePillar.Default__BP_CreatureCreatedObstacle_StonePillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureCreatedObstacle_StonePillar_C* ABP_CreatureCreatedObstacle_StonePillar_C::GetDefaultObj()
{
	static class ABP_CreatureCreatedObstacle_StonePillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureCreatedObstacle_StonePillar_C*>(ABP_CreatureCreatedObstacle_StonePillar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.DeathLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTargetGroundLevel_HitDetected                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetGroundLevel_GroundLocation                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetGroundLevel_GroundNormal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAtMinHealth_AtMinHealth                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_StonePillar_C::DeathLogic(double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GetTargetGroundLevel_HitDetected, const struct FVector& CallFunc_GetTargetGroundLevel_GroundLocation, const struct FVector& CallFunc_GetTargetGroundLevel_GroundNormal, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsAtMinHealth_AtMinHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "DeathLogic");

	Params::ABP_CreatureCreatedObstacle_StonePillar_C_DeathLogic_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetTargetGroundLevel_HitDetected = CallFunc_GetTargetGroundLevel_HitDetected;
	Parms.CallFunc_GetTargetGroundLevel_GroundLocation = CallFunc_GetTargetGroundLevel_GroundLocation;
	Parms.CallFunc_GetTargetGroundLevel_GroundNormal = CallFunc_GetTargetGroundLevel_GroundNormal;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_IsAtMinHealth_AtMinHealth = CallFunc_IsAtMinHealth_AtMinHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.SetIsDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_StonePillar_C::SetIsDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "SetIsDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CreatureCreatedObstacle_StonePillar_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "UserConstructionScript");

	Params::ABP_CreatureCreatedObstacle_StonePillar_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_StonePillar_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_StonePillar_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_StonePillar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_StonePillar_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "ReceiveActorBeginOverlap");

	Params::ABP_CreatureCreatedObstacle_StonePillar_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.TEMP_DamageRecieved
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageSource                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_StonePillar_C::TEMP_DamageRecieved(double Damage, class AActor* DamageSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "TEMP_DamageRecieved");

	Params::ABP_CreatureCreatedObstacle_StonePillar_C_TEMP_DamageRecieved_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageSource = DamageSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C.ExecuteUbergraph_BP_CreatureCreatedObstacle_StonePillar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Random_OutItem                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageSource                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_StonePillar_C::ExecuteUbergraph_BP_CreatureCreatedObstacle_StonePillar(int32 EntryPoint, class UStaticMesh* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FGameplayTag& Temp_struct_Variable, class AActor* K2Node_Event_OtherActor, bool CallFunc_ActorHasTag_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, double K2Node_Event_Damage, class AActor* K2Node_Event_DamageSource, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_StonePillar_C", "ExecuteUbergraph_BP_CreatureCreatedObstacle_StonePillar");

	Params::ABP_CreatureCreatedObstacle_StonePillar_C_ExecuteUbergraph_BP_CreatureCreatedObstacle_StonePillar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageSource = K2Node_Event_DamageSource;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


