#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Proj_Grenade.Proj_Grenade_C
// (Actor)

class UClass* AProj_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Proj_Grenade_C");

	return Clss;
}


// Proj_Grenade_C Proj_Grenade.Default__Proj_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProj_Grenade_C* AProj_Grenade_C::GetDefaultObj()
{
	static class AProj_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProj_Grenade_C*>(AProj_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_CanBeStolen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GrenadeUsesPayload_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GrenadeUsesPayload_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AIProjectile_CanBeStolen_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AProj_Grenade_C::AIProjectile_CanBeStolen(bool CallFunc_GrenadeUsesPayload_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_GrenadeUsesPayload_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AIProjectile_CanBeStolen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "AIProjectile_CanBeStolen");

	Params::AProj_Grenade_C_AIProjectile_CanBeStolen_Params Parms{};

	Parms.CallFunc_GrenadeUsesPayload_ReturnValue = CallFunc_GrenadeUsesPayload_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GrenadeUsesPayload_ReturnValue1 = CallFunc_GrenadeUsesPayload_ReturnValue1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_AIProjectile_CanBeStolen_ReturnValue = CallFunc_AIProjectile_CanBeStolen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectileDetonate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_Grenade_C::AIProjectileDetonate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "AIProjectileDetonate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectileArm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGrenadeHomingComponent*     CallFunc_GetHomingComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AProj_Grenade_C::AIProjectileArm(bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UGrenadeHomingComponent* CallFunc_GetHomingComponent_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "AIProjectileArm");

	Params::AProj_Grenade_C_AIProjectileArm_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetHomingComponent_ReturnValue = CallFunc_GetHomingComponent_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue1 = CallFunc_GetObjectClass_ReturnValue1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue1 = CallFunc_EqualEqual_ClassClass_ReturnValue1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_EqualEqual_ClassClass_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectileDisarm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GrenadeUsesPayload_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGrenadeHomingComponent*     CallFunc_GetHomingComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AProj_Grenade_C::AIProjectileDisarm(class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_GrenadeUsesPayload_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, class UGrenadeHomingComponent* CallFunc_GetHomingComponent_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "AIProjectileDisarm");

	Params::AProj_Grenade_C_AIProjectileDisarm_Params Parms{};

	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GrenadeUsesPayload_ReturnValue = CallFunc_GrenadeUsesPayload_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue1 = CallFunc_GetObjectClass_ReturnValue1;
	Parms.CallFunc_GetHomingComponent_ReturnValue = CallFunc_GetHomingComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue1 = CallFunc_EqualEqual_ClassClass_ReturnValue1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_EqualEqual_ClassClass_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_GetObjectClass_ReturnValue2 = CallFunc_GetObjectClass_ReturnValue2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue4 = CallFunc_EqualEqual_ClassClass_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_Grenade.Proj_Grenade_C.TriggerGrenadeDodge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_Grenade_C::TriggerGrenadeDodge(float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "TriggerGrenadeDodge");

	Params::AProj_Grenade_C_TriggerGrenadeDodge_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_Grenade.Proj_Grenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_Grenade_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Grenade.Proj_Grenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProj_Grenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Grenade.Proj_Grenade_C.OnBounce
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     ImpactVelocity                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_Grenade_C::OnBounce(struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "OnBounce");

	Params::AProj_Grenade_C_OnBounce_Params Parms{};

	Parms.Hit = Hit;
	Parms.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Arm
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_Grenade_C::AIProjectile_Arm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "AIProjectile_Arm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Detonate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_Grenade_C::AIProjectile_Detonate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "AIProjectile_Detonate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Disarm
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_Grenade_C::AIProjectile_Disarm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "AIProjectile_Disarm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Grenade.Proj_Grenade_C.ExecuteUbergraph_Proj_Grenade
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     K2Node_Event_ImpactVelocity                                      (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void AProj_Grenade_C::ExecuteUbergraph_Proj_Grenade(int32 EntryPoint, const struct FHitResult& K2Node_Event_Hit, const struct FVector& K2Node_Event_ImpactVelocity, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Grenade_C", "ExecuteUbergraph_Proj_Grenade");

	Params::AProj_Grenade_C_ExecuteUbergraph_Proj_Grenade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_Event_ImpactVelocity = K2Node_Event_ImpactVelocity;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


