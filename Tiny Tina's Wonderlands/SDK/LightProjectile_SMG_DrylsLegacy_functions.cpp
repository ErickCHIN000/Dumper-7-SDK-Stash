#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_SMG_DrylsLegacy.LightProjectile_SMG_DrylsLegacy_C
// (None)

class UClass* ULightProjectile_SMG_DrylsLegacy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_SMG_DrylsLegacy_C");

	return Clss;
}


// LightProjectile_SMG_DrylsLegacy_C LightProjectile_SMG_DrylsLegacy.Default__LightProjectile_SMG_DrylsLegacy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_SMG_DrylsLegacy_C* ULightProjectile_SMG_DrylsLegacy_C::GetDefaultObj()
{
	static class ULightProjectile_SMG_DrylsLegacy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_SMG_DrylsLegacy_C*>(ULightProjectile_SMG_DrylsLegacy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_SMG_DrylsLegacy.LightProjectile_SMG_DrylsLegacy_C.OnRicochet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     ImpactVelocity                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_SMG_DrylsLegacy_C::OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SMG_DrylsLegacy_C", "OnRicochet");

	Params::ULightProjectile_SMG_DrylsLegacy_C_OnRicochet_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.ImpactVelocity = ImpactVelocity;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_SMG_DrylsLegacy.LightProjectile_SMG_DrylsLegacy_C.EnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_SMG_DrylsLegacy_C::EnableHoming(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SMG_DrylsLegacy_C", "EnableHoming");

	Params::ULightProjectile_SMG_DrylsLegacy_C_EnableHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_SMG_DrylsLegacy.LightProjectile_SMG_DrylsLegacy_C.OnImpact
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetAttachedActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)

void ULightProjectile_SMG_DrylsLegacy_C::OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, class AActor* CallFunc_GetAttachedActor_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SMG_DrylsLegacy_C", "OnImpact");

	Params::ULightProjectile_SMG_DrylsLegacy_C_OnImpact_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.CallFunc_GetAttachedActor_ReturnValue = CallFunc_GetAttachedActor_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_SMG_DrylsLegacy.LightProjectile_SMG_DrylsLegacy_C.OnLifetimeExpired
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_SMG_DrylsLegacy_C::OnLifetimeExpired(class ULightProjectile* Projectile, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SMG_DrylsLegacy_C", "OnLifetimeExpired");

	Params::ULightProjectile_SMG_DrylsLegacy_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_SMG_DrylsLegacy.LightProjectile_SMG_DrylsLegacy_C.OnAttached
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttachedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_SMG_DrylsLegacy_C::OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_GetSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SMG_DrylsLegacy_C", "OnAttached");

	Params::ULightProjectile_SMG_DrylsLegacy_C_OnAttached_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.AttachedActor = AttachedActor;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


