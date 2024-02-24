#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C
// (Actor, Pawn)

class UClass* ABP_GGNPC_Humanoid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGNPC_Humanoid_C");

	return Clss;
}


// BP_GGNPC_Humanoid_C BP_GGNPC_Humanoid.Default__BP_GGNPC_Humanoid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGNPC_Humanoid_C* ABP_GGNPC_Humanoid_C::GetDefaultObj()
{
	static class ABP_GGNPC_Humanoid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGNPC_Humanoid_C*>(ABP_GGNPC_Humanoid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.GetRagdollImpactSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ImpactImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   SoundToPlay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CurrentSoundToPlay                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGoatRagdollImpactSoundStructCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GGNPC_Humanoid_C::GetRagdollImpactSound(float ImpactImpulse, class USoundCue** SoundToPlay, class USoundCue* CurrentSoundToPlay, int32 Temp_int_Array_Index_Variable, const struct FGoatRagdollImpactSoundStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "GetRagdollImpactSound");

	Params::ABP_GGNPC_Humanoid_C_GetRagdollImpactSound_Params Parms{};

	Parms.ImpactImpulse = ImpactImpulse;
	Parms.CurrentSoundToPlay = CurrentSoundToPlay;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SoundToPlay != nullptr)
		*SoundToPlay = Parms.SoundToPlay;

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.FadeInTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_GGNPC_Humanoid_C::FadeInTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "FadeInTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.FadeInTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_GGNPC_Humanoid_C::FadeInTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "FadeInTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.OnRep_GenderSet
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GGNPC_Humanoid_C::OnRep_GenderSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "OnRep_GenderSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.BPFadeIn
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GGNPC_Humanoid_C::BPFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "BPFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_GGNPC_Humanoid_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "ReceiveHit");

	Params::ABP_GGNPC_Humanoid_C_ReceiveHit_Params Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.PlayRagdollImpactSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGNPC_Humanoid_C::PlayRagdollImpactSound(const struct FVector& NormalImpulse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "PlayRagdollImpactSound");

	Params::ABP_GGNPC_Humanoid_C_PlayRagdollImpactSound_Params Parms{};

	Parms.NormalImpulse = NormalImpulse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.ObjectWasHeadbutted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     HeadbuttingGoat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGNPC_Humanoid_C::ObjectWasHeadbutted(class AGGGoat* HeadbuttingGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "ObjectWasHeadbutted");

	Params::ABP_GGNPC_Humanoid_C_ObjectWasHeadbutted_Params Parms{};

	Parms.HeadbuttingGoat = HeadbuttingGoat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.PlayHeadbuttFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GGNPC_Humanoid_C::PlayHeadbuttFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "PlayHeadbuttFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.AnimNotifyTriggered
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_GGNPC_Humanoid_C::AnimNotifyTriggered(struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "AnimNotifyTriggered");

	Params::ABP_GGNPC_Humanoid_C_AnimNotifyTriggered_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGNPC_Humanoid.BP_GGNPC_Humanoid_C.ExecuteUbergraph_BP_GGNPC_Humanoid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRagdoll_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_NormalImpulse                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetRagdollImpactSound_SoundToPlay                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetRagdollImpactSound_SoundToPlay_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGrabbedByActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_HeadbuttingGoat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayVoiceOver_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_NotifyTag                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GGNPC_Humanoid_C::ExecuteUbergraph_BP_GGNPC_Humanoid(int32 EntryPoint, bool CallFunc_IsRagdoll_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& K2Node_CustomEvent_NormalImpulse, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, class USoundCue* CallFunc_GetRagdollImpactSound_SoundToPlay, class USoundCue* CallFunc_GetRagdollImpactSound_SoundToPlay_1, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_IsGrabbedByActor_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, class AGGGoat* K2Node_Event_HeadbuttingGoat, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_PlayVoiceOver_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FGameplayTag& K2Node_Event_NotifyTag, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_C", "ExecuteUbergraph_BP_GGNPC_Humanoid");

	Params::ABP_GGNPC_Humanoid_C_ExecuteUbergraph_BP_GGNPC_Humanoid_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsRagdoll_ReturnValue = CallFunc_IsRagdoll_ReturnValue;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_NormalImpulse = K2Node_CustomEvent_NormalImpulse;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_GetRagdollImpactSound_SoundToPlay = CallFunc_GetRagdollImpactSound_SoundToPlay;
	Parms.CallFunc_GetRagdollImpactSound_SoundToPlay_1 = CallFunc_GetRagdollImpactSound_SoundToPlay_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsGrabbedByActor_ReturnValue = CallFunc_IsGrabbedByActor_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_Event_HeadbuttingGoat = K2Node_Event_HeadbuttingGoat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_PlayVoiceOver_ReturnValue = CallFunc_PlayVoiceOver_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.K2Node_Event_NotifyTag = K2Node_Event_NotifyTag;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


