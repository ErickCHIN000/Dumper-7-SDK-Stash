#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxWeapon.Projectile
// (Actor)

class UClass* AProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile");

	return Clss;
}


// Projectile GbxWeapon.Default__Projectile
// (Public, ClassDefaultObject, ArchetypeObject)

class AProjectile* AProjectile::GetDefaultObj()
{
	static class AProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile*>(AProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.Projectile.StopBlockingPawns
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AProjectile::StopBlockingPawns()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "StopBlockingPawns");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.SetProjectileDamageType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGbxDamageType>  DamageType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::SetProjectileDamageType(TSubclassOf<class UGbxDamageType> DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "SetProjectileDamageType");

	Params::AProjectile_SetProjectileDamageType_Params Parms{};

	Parms.DamageType = DamageType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.SetProjectileDamageSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UDamageSource>   DamageSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::SetProjectileDamageSource(TSubclassOf<class UDamageSource> DamageSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "SetProjectileDamageSource");

	Params::AProjectile_SetProjectileDamageSource_Params Parms{};

	Parms.DamageSource = DamageSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.SetProjectileDamageRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DamageRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::SetProjectileDamageRadius(float DamageRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "SetProjectileDamageRadius");

	Params::AProjectile_SetProjectileDamageRadius_Params Parms{};

	Parms.DamageRadius = DamageRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.SetProjectileDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::SetProjectileDamage(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "SetProjectileDamage");

	Params::AProjectile_SetProjectileDamage_Params Parms{};

	Parms.Damage = Damage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.ResetCollisionWith
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ActorToCollide                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::ResetCollisionWith(class AActor* ActorToCollide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "ResetCollisionWith");

	Params::AProjectile_ResetCollisionWith_Params Parms{};

	Parms.ActorToCollide = ActorToCollide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.OnRep_SpawnModifierType
// (Final, Native, Protected)
// Parameters:

void AProjectile::OnRep_SpawnModifierType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnRep_SpawnModifierType");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.OnLastBounce
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  ImpactResult                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AProjectile::OnLastBounce(struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnLastBounce");

	Params::AProjectile_OnLastBounce_Params Parms{};

	Parms.ImpactResult = ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.Projectile.OnHitWorld
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AProjectile::OnHitWorld(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnHitWorld");

	Params::AProjectile_OnHitWorld_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.Projectile.OnHitNeutral
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AProjectile::OnHitNeutral(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnHitNeutral");

	Params::AProjectile_OnHitNeutral_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.Projectile.OnHitFriendly
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AProjectile::OnHitFriendly(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnHitFriendly");

	Params::AProjectile_OnHitFriendly_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.Projectile.OnHitEnemy
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AProjectile::OnHitEnemy(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnHitEnemy");

	Params::AProjectile_OnHitEnemy_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.Projectile.OnHitDamagableObject
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AProjectile::OnHitDamagableObject(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnHitDamagableObject");

	Params::AProjectile_OnHitDamagableObject_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.Projectile.OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.Projectile.OnComponentDetachedFromParent
// (Final, Native, Public)
// Parameters:
// class USceneComponent*             SceneComponent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::OnComponentDetachedFromParent(class USceneComponent* SceneComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnComponentDetachedFromParent");

	Params::AProjectile_OnComponentDetachedFromParent_Params Parms{};

	Parms.SceneComponent = SceneComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.OnBounce
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ImpactVelocity                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::OnBounce(struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnBounce");

	Params::AProjectile_OnBounce_Params Parms{};

	Parms.Hit = Hit;
	Parms.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.Projectile.OnBeginExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile::OnBeginExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "OnBeginExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.Projectile.IgnoreCollisionWith
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ActorToIgnore                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::IgnoreCollisionWith(class AActor* ActorToIgnore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "IgnoreCollisionWith");

	Params::AProjectile_IgnoreCollisionWith_Params Parms{};

	Parms.ActorToIgnore = ActorToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.HandleDetachRequest
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AProjectile::HandleDetachRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "HandleDetachRequest");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.GetProjectileMovementComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxProjectileMovementComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxProjectileMovementComponent* AProjectile::GetProjectileMovementComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "GetProjectileMovementComponent");

	Params::AProjectile_GetProjectileMovementComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Projectile.GetProjectileDamageType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class UGbxDamageType>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UGbxDamageType> AProjectile::GetProjectileDamageType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "GetProjectileDamageType");

	Params::AProjectile_GetProjectileDamageType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Projectile.GetProjectileDamageSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class UDamageSource>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UDamageSource> AProjectile::GetProjectileDamageSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "GetProjectileDamageSource");

	Params::AProjectile_GetProjectileDamageSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Projectile.GetProjectileDamageRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AProjectile::GetProjectileDamageRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "GetProjectileDamageRadius");

	Params::AProjectile_GetProjectileDamageRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Projectile.GetProjectileDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AProjectile::GetProjectileDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "GetProjectileDamage");

	Params::AProjectile_GetProjectileDamage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Projectile.GetExplosionComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UExplosionComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UExplosionComponent* AProjectile::GetExplosionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "GetExplosionComponent");

	Params::AProjectile_GetExplosionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Projectile.Explode
// (Native, Public, BlueprintCallable)
// Parameters:

void AProjectile::Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "Explode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.CheckProjectileAttachment
// (Final, Native, Public)
// Parameters:

void AProjectile::CheckProjectileAttachment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "CheckProjectileAttachment");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Projectile.BounceDelegate
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FHitResult                  ImpactResult                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ImpactVelocity                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProjectile::BounceDelegate(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile", "BounceDelegate");

	Params::AProjectile_BounceDelegate_Params Parms{};

	Parms.ImpactResult = ImpactResult;
	Parms.ImpactVelocity = ImpactVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.GbxProjectileMovementComponent
// (None)

class UClass* UGbxProjectileMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxProjectileMovementComponent");

	return Clss;
}


// GbxProjectileMovementComponent GbxWeapon.Default__GbxProjectileMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxProjectileMovementComponent* UGbxProjectileMovementComponent::GetDefaultObj()
{
	static class UGbxProjectileMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxProjectileMovementComponent*>(UGbxProjectileMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.GbxProjectileMovementComponent.ScaleVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScale                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProjectileMovementComponent::ScaleVelocity(float InScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProjectileMovementComponent", "ScaleVelocity");

	Params::UGbxProjectileMovementComponent_ScaleVelocity_Params Parms{};

	Parms.InScale = InScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.GbxProjectileMovementComponent.OnRep_InitialProjectileGravity
// (Final, Native, Protected)
// Parameters:

void UGbxProjectileMovementComponent::OnRep_InitialProjectileGravity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProjectileMovementComponent", "OnRep_InitialProjectileGravity");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GbxWeapon.GbxProjectileMovementComponent.OnProjectilePostLastBounceDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FHitResult                  ImpactResult                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxProjectileMovementComponent::OnProjectilePostLastBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProjectileMovementComponent", "OnProjectilePostLastBounceDelegate__DelegateSignature");

	Params::UGbxProjectileMovementComponent_OnProjectilePostLastBounceDelegate__DelegateSignature_Params Parms{};

	Parms.ImpactResult = ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.GbxProjectileMovementComponent.OnHit
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class AActor*                      SelfActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxProjectileMovementComponent::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProjectileMovementComponent", "OnHit");

	Params::UGbxProjectileMovementComponent_OnHit_Params Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.GbxProjectileMovementComponent.OnBounce
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FHitResult                  ImpactResult                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ImpactVelocity                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProjectileMovementComponent::OnBounce(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProjectileMovementComponent", "OnBounce");

	Params::UGbxProjectileMovementComponent_OnBounce_Params Parms{};

	Parms.ImpactResult = ImpactResult;
	Parms.ImpactVelocity = ImpactVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.LightProjectileManager
// (Actor)

class UClass* ALightProjectileManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileManager");

	return Clss;
}


// LightProjectileManager GbxWeapon.Default__LightProjectileManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ALightProjectileManager* ALightProjectileManager::GetDefaultObj()
{
	static class ALightProjectileManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightProjectileManager*>(ALightProjectileManager::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.LightProjectileManager.ServerSendDebugProjectileImpact
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetClient)
// Parameters:
// int32                              ProjSyncID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      HitActor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint16                             ProjFlags                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALightProjectileManager::ServerSendDebugProjectileImpact(int32 ProjSyncID, class AActor* HitActor, class FName BoneName, uint16 ProjFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileManager", "ServerSendDebugProjectileImpact");

	Params::ALightProjectileManager_ServerSendDebugProjectileImpact_Params Parms{};

	Parms.ProjSyncID = ProjSyncID;
	Parms.HitActor = HitActor;
	Parms.BoneName = BoneName;
	Parms.ProjFlags = ProjFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileManager.OnParticleSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent*    FinishedComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALightProjectileManager::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileManager", "OnParticleSystemFinished");

	Params::ALightProjectileManager_OnParticleSystemFinished_Params Parms{};

	Parms.FinishedComponent = FinishedComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.LightProjectile
// (None)

class UClass* ULightProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile");

	return Clss;
}


// LightProjectile GbxWeapon.Default__LightProjectile
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectile* ULightProjectile::GetDefaultObj()
{
	static class ULightProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile*>(ULightProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.LightProjectile.SetLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewLifetime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::SetLifetime(float NewLifetime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "SetLifetime");

	Params::ULightProjectile_SetLifetime_Params Parms{};

	Parms.NewLifetime = NewLifetime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.SetHomingTargetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     HomingLocation                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::SetHomingTargetLocation(const struct FVector& HomingLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "SetHomingTargetLocation");

	Params::ULightProjectile_SetHomingTargetLocation_Params Parms{};

	Parms.HomingLocation = HomingLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.SetHomingTarget
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      HomingTarget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetOffset                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::SetHomingTarget(class AActor* HomingTarget, const struct FVector& TargetOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "SetHomingTarget");

	Params::ULightProjectile_SetHomingTarget_Params Parms{};

	Parms.HomingTarget = HomingTarget;
	Parms.TargetOffset = TargetOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.PlayFeedbackSoundEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UWwiseEvent*                 Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::PlayFeedbackSoundEvent(class UWwiseEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "PlayFeedbackSoundEvent");

	Params::ULightProjectile_PlayFeedbackSoundEvent_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnRep_Shutdown
// (Final, Native, Protected)
// Parameters:

void ULightProjectile::OnRep_Shutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnRep_Shutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnRep_InitialClientState
// (Final, Native, Protected)
// Parameters:

void ULightProjectile::OnRep_InitialClientState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnRep_InitialClientState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnRep_Impact
// (Final, Native, Protected)
// Parameters:

void ULightProjectile::OnRep_Impact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnRep_Impact");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnRep_Exploded
// (Final, Native, Protected)
// Parameters:

void ULightProjectile::OnRep_Exploded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnRep_Exploded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnRep_Attached
// (Final, Native, Protected)
// Parameters:

void ULightProjectile::OnRep_Attached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnRep_Attached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnParticleSystemFinished
// (Final, Native, Protected)
// Parameters:
// class UParticleSystemComponent*    FinishedComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnParticleSystemFinished");

	Params::ULightProjectile_OnParticleSystemFinished_Params Parms{};

	Parms.FinishedComponent = FinishedComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnAttachedComponentUnregistered
// (Final, Native, Protected)
// Parameters:
// class UActorComponent*             UnregisteredComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::OnAttachedComponentUnregistered(class UActorComponent* UnregisteredComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnAttachedComponentUnregistered");

	Params::ULightProjectile_OnAttachedComponentUnregistered_Params Parms{};

	Parms.UnregisteredComponent = UnregisteredComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnAttachedComponentCollisionChanged
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*         ChangedComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::OnAttachedComponentCollisionChanged(class UPrimitiveComponent* ChangedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnAttachedComponentCollisionChanged");

	Params::ULightProjectile_OnAttachedComponentCollisionChanged_Params Parms{};

	Parms.ChangedComponent = ChangedComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnAttachedActorFractured
// (Final, Native, Protected, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     HitPoint                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitDirection                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::OnAttachedActorFractured(struct FVector& HitPoint, struct FVector& HitDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnAttachedActorFractured");

	Params::ULightProjectile_OnAttachedActorFractured_Params Parms{};

	Parms.HitPoint = HitPoint;
	Parms.HitDirection = HitDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.OnAttachedActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::OnAttachedActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "OnAttachedActorDestroyed");

	Params::ULightProjectile_OnAttachedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.K2_ApplyImpactDamage
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              ImpactDamage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPenetrated                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanReflect                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::K2_ApplyImpactDamage(struct FHitResult& Hit, float ImpactDamage, bool bPenetrated, bool bCanReflect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "K2_ApplyImpactDamage");

	Params::ULightProjectile_K2_ApplyImpactDamage_Params Parms{};

	Parms.Hit = Hit;
	Parms.ImpactDamage = ImpactDamage;
	Parms.bPenetrated = bPenetrated;
	Parms.bCanReflect = bCanReflect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.IsHomingMovingDirectlyTowardsTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULightProjectile::IsHomingMovingDirectlyTowardsTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "IsHomingMovingDirectlyTowardsTarget");

	Params::ULightProjectile_IsHomingMovingDirectlyTowardsTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.IsHoming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULightProjectile::IsHoming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "IsHoming");

	Params::ULightProjectile_IsHoming_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.InitChildData
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLightProjectileInitializationDataInitData                                                         (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULightProjectile::InitChildData(struct FLightProjectileInitializationData* InitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "InitChildData");

	Params::ULightProjectile_InitChildData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InitData != nullptr)
		*InitData = std::move(Parms.InitData);

}


// Function GbxWeapon.LightProjectile.GetTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightProjectile::GetTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetTarget");

	Params::ULightProjectile_GetTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightProjectile::GetSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetSource");

	Params::ULightProjectile_GetSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetModifierValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULightProjectile::GetModifierValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetModifierValue");

	Params::ULightProjectile_GetModifierValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetModifierType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWeaponShotModifierType ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWeaponShotModifierType ULightProjectile::GetModifierType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetModifierType");

	Params::ULightProjectile_GetModifierType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetInstigator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* ULightProjectile::GetInstigator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetInstigator");

	Params::ULightProjectile_GetInstigator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetImpactDataOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UImpactData*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UImpactData* ULightProjectile::GetImpactDataOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetImpactDataOverride");

	Params::ULightProjectile_GetImpactDataOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetImpactData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UImpactData*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UImpactData* ULightProjectile::GetImpactData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetImpactData");

	Params::ULightProjectile_GetImpactData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetHomingStartTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULightProjectile::GetHomingStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetHomingStartTime");

	Params::ULightProjectile_GetHomingStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetFiringPatternID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 ULightProjectile::GetFiringPatternID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetFiringPatternID");

	Params::ULightProjectile_GetFiringPatternID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetDamageType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxDamageType*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxDamageType* ULightProjectile::GetDamageType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetDamageType");

	Params::ULightProjectile_GetDamageType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetDamageCauser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightProjectile::GetDamageCauser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetDamageCauser");

	Params::ULightProjectile_GetDamageCauser_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetAttitudeTowards
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETeamAttitude           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETeamAttitude ULightProjectile::GetAttitudeTowards(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetAttitudeTowards");

	Params::ULightProjectile_GetAttitudeTowards_Params Parms{};

	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetAttachedImpactNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector ULightProjectile::GetAttachedImpactNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetAttachedImpactNormal");

	Params::ULightProjectile_GetAttachedImpactNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetAttachedDamageReceiverActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightProjectile::GetAttachedDamageReceiverActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetAttachedDamageReceiverActor");

	Params::ULightProjectile_GetAttachedDamageReceiverActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetAttachedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightProjectile::GetAttachedActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetAttachedActor");

	Params::ULightProjectile_GetAttachedActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.GetAssociatedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELightProjectileQueryActorTypeActorType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightProjectile::GetAssociatedActor(enum class ELightProjectileQueryActorType ActorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "GetAssociatedActor");

	Params::ULightProjectile_GetAssociatedActor_Params Parms{};

	Parms.ActorType = ActorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectile.Explode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectile::Explode(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "Explode");

	Params::ULightProjectile_Explode_Params Parms{};

	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.EnableHoming
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULightProjectile::EnableHoming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "EnableHoming");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.DisableHoming
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULightProjectile::DisableHoming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "DisableHoming");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.Destroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULightProjectile::Destroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "Destroy");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectile.ApplyAreaDamage
// (Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      HitActor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULightProjectile::ApplyAreaDamage(struct FVector& Origin, class AActor* HitActor, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile", "ApplyAreaDamage");

	Params::ULightProjectile_ApplyAreaDamage_Params Parms{};

	Parms.Origin = Origin;
	Parms.HitActor = HitActor;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.LightProjectileData
// (None)

class UClass* ULightProjectileData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileData");

	return Clss;
}


// LightProjectileData GbxWeapon.Default__LightProjectileData
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectileData* ULightProjectileData::GetDefaultObj()
{
	static class ULightProjectileData* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectileData*>(ULightProjectileData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.LightProjectileData.OnRicochet
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ImpactVelocity                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileData::OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "OnRicochet");

	Params::ULightProjectileData_OnRicochet_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.LightProjectileData.OnProxyImpact
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULightProjectileData::OnProxyImpact(class ULightProjectile* Projectile, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "OnProxyImpact");

	Params::ULightProjectileData_OnProxyImpact_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.LightProjectileData.OnLifetimeExpired
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileData::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "OnLifetimeExpired");

	Params::ULightProjectileData_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.LightProjectileData.OnImpact
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULightProjectileData::OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "OnImpact");

	Params::ULightProjectileData_OnImpact_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.LightProjectileData.OnExplode
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileData::OnExplode(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "OnExplode");

	Params::ULightProjectileData_OnExplode_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.LightProjectileData.OnDamage
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bCritical                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileData::OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "OnDamage");

	Params::ULightProjectileData_OnDamage_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.bCritical = bCritical;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.LightProjectileData.OnBegin
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileData::OnBegin(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "OnBegin");

	Params::ULightProjectileData_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.LightProjectileData.OnAttached
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      AttachedActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileData::OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "OnAttached");

	Params::ULightProjectileData_OnAttached_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.AttachedActor = AttachedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.LightProjectileData.GetTimedEventNameList
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class FName>                FuncList                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULightProjectileData::GetTimedEventNameList(TArray<class FName>* FuncList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileData", "GetTimedEventNameList");

	Params::ULightProjectileData_GetTimedEventNameList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FuncList != nullptr)
		*FuncList = std::move(Parms.FuncList);

}


// Class GbxWeapon.LightBeamManager
// (Actor)

class UClass* ALightBeamManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeamManager");

	return Clss;
}


// LightBeamManager GbxWeapon.Default__LightBeamManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ALightBeamManager* ALightBeamManager::GetDefaultObj()
{
	static class ALightBeamManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBeamManager*>(ALightBeamManager::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.LightBeamManager.OnParticleSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent*    FinishedComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALightBeamManager::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamManager", "OnParticleSystemFinished");

	Params::ALightBeamManager_OnParticleSystemFinished_Params Parms{};

	Parms.FinishedComponent = FinishedComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.LightBeam
// (None)

class UClass* ULightBeam::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam");

	return Clss;
}


// LightBeam GbxWeapon.Default__LightBeam
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightBeam* ULightBeam::GetDefaultObj()
{
	static class ULightBeam* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam*>(ULightBeam::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.LightBeam.SetTargetSocket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Socket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightBeam::SetTargetSocket(class FName Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "SetTargetSocket");

	Params::ULightBeam_SetTargetSocket_Params Parms{};

	Parms.Socket = Socket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeam.OnTrackedImpactParticleSystemFinished
// (Final, Native, Protected)
// Parameters:
// class UParticleSystemComponent*    PSC                                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightBeam::OnTrackedImpactParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "OnTrackedImpactParticleSystemFinished");

	Params::ULightBeam_OnTrackedImpactParticleSystemFinished_Params Parms{};

	Parms.PSC = PSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeam.OnRep_ModifierValue
// (Final, Native, Protected)
// Parameters:

void ULightBeam::OnRep_ModifierValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "OnRep_ModifierValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeam.OnRep_ModifierType
// (Final, Native, Protected)
// Parameters:

void ULightBeam::OnRep_ModifierType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "OnRep_ModifierType");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeam.OnRep_ClientState
// (Final, Native, Protected)
// Parameters:

void ULightBeam::OnRep_ClientState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "OnRep_ClientState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeam.LockOntoTarget
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightBeamAttachment        Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULightBeam::LockOntoTarget(struct FLightBeamAttachment& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "LockOntoTarget");

	Params::ULightBeam_LockOntoTarget_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeam.InitChildData
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLightBeamInitializationDataInitData                                                         (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULightBeam::InitChildData(struct FLightBeamInitializationData* InitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "InitChildData");

	Params::ULightBeam_InitChildData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InitData != nullptr)
		*InitData = std::move(Parms.InitData);

}


// Function GbxWeapon.LightBeam.GetTargetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightBeam::GetTargetActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetTargetActor");

	Params::ULightBeam_GetTargetActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLightBeamAttachment        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FLightBeamAttachment ULightBeam::GetTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetTarget");

	Params::ULightBeam_GetTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetSourceActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightBeam::GetSourceActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetSourceActor");

	Params::ULightBeam_GetSourceActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLightBeamAttachment        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FLightBeamAttachment ULightBeam::GetSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetSource");

	Params::ULightBeam_GetSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetInstigator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* ULightBeam::GetInstigator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetInstigator");

	Params::ULightBeam_GetInstigator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetImpactForce
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULightBeam::GetImpactForce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetImpactForce");

	Params::ULightBeam_GetImpactForce_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetDamageType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxDamageType*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxDamageType* ULightBeam::GetDamageType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetDamageType");

	Params::ULightBeam_GetDamageType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetDamageCauser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightBeam::GetDamageCauser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetDamageCauser");

	Params::ULightBeam_GetDamageCauser_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULightBeam::GetDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetDamage");

	Params::ULightBeam_GetDamage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeam.GetAssociatedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELightBeamQueryActorTypeActorType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULightBeam::GetAssociatedActor(enum class ELightBeamQueryActorType ActorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeam", "GetAssociatedActor");

	Params::ULightBeam_GetAssociatedActor_Params Parms{};

	Parms.ActorType = ActorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxWeapon.LightBeamData
// (None)

class UClass* ULightBeamData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeamData");

	return Clss;
}


// LightBeamData GbxWeapon.Default__LightBeamData
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightBeamData* ULightBeamData::GetDefaultObj()
{
	static class ULightBeamData* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeamData*>(ULightBeamData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.LightBeamData.UpdateTarget
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightBeam*                  Beam                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULightBeamData::UpdateTarget(class ULightBeam* Beam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamData", "UpdateTarget");

	Params::ULightBeamData_UpdateTarget_Params Parms{};

	Parms.Beam = Beam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeamData.CanLockOn
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightBeam*                  Beam                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULightBeamData::CanLockOn(class ULightBeam* Beam, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamData", "CanLockOn");

	Params::ULightBeamData_CanLockOn_Params Parms{};

	Parms.Beam = Beam;
	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxWeapon.WeaponUseComponent
// (None)

class UClass* UWeaponUseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponUseComponent");

	return Clss;
}


// WeaponUseComponent GbxWeapon.Default__WeaponUseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponUseComponent* UWeaponUseComponent::GetDefaultObj()
{
	static class UWeaponUseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponUseComponent*>(UWeaponUseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponUseComponent.ToggleMode
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponUseComponent::ToggleMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponUseComponent", "ToggleMode");

	Params::UWeaponUseComponent_ToggleMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponUseComponent.SwitchToZoomedMode
// (Final, Native, Protected)
// Parameters:
// uint8                              ZoomLevel                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponUseComponent::SwitchToZoomedMode(uint8 ZoomLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponUseComponent", "SwitchToZoomedMode");

	Params::UWeaponUseComponent_SwitchToZoomedMode_Params Parms{};

	Parms.ZoomLevel = ZoomLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponUseComponent.SwitchFromZoomedMode
// (Final, Native, Protected)
// Parameters:
// uint8                              ZoomLevel                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponUseComponent::SwitchFromZoomedMode(uint8 ZoomLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponUseComponent", "SwitchFromZoomedMode");

	Params::UWeaponUseComponent_SwitchFromZoomedMode_Params Parms{};

	Parms.ZoomLevel = ZoomLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponUseComponent.OnPreUseFinished
// (Native, Protected)
// Parameters:
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponUseComponent::OnPreUseFinished(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponUseComponent", "OnPreUseFinished");

	Params::UWeaponUseComponent_OnPreUseFinished_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponUseComponent.K2_OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UWeaponUseComponent::K2_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponUseComponent", "K2_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponUseComponent.K2_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UWeaponUseComponent::K2_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponUseComponent", "K2_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponUseComponent.CanActivateMode
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponUseComponent::CanActivateMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponUseComponent", "CanActivateMode");

	Params::UWeaponUseComponent_CanActivateMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxWeapon.WeaponFireComponent
// (None)

class UClass* UWeaponFireComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponFireComponent");

	return Clss;
}


// WeaponFireComponent GbxWeapon.Default__WeaponFireComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponFireComponent* UWeaponFireComponent::GetDefaultObj()
{
	static class UWeaponFireComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponFireComponent*>(UWeaponFireComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponFireComponent.ServerResetFireSequence
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UWeaponFireComponent::ServerResetFireSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "ServerResetFireSequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponFireComponent.OnStopFireRateDeceleration
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWeaponFireComponent::OnStopFireRateDeceleration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnStopFireRateDeceleration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponFireComponent.OnStopFireRateAcceleration
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWeaponFireComponent::OnStopFireRateAcceleration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnStopFireRateAcceleration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponFireComponent.OnStartFireRateDeceleration
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWeaponFireComponent::OnStartFireRateDeceleration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnStartFireRateDeceleration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponFireComponent.OnStartFireRateAcceleration
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWeaponFireComponent::OnStartFireRateAcceleration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnStartFireRateAcceleration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponFireComponent.OnRep_ImpactLocation
// (Native, Protected)
// Parameters:

void UWeaponFireComponent::OnRep_ImpactLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnRep_ImpactLocation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponFireComponent.OnRep_FlashCount
// (Native, Protected)
// Parameters:

void UWeaponFireComponent::OnRep_FlashCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnRep_FlashCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponFireComponent.OnRep_FireRateAccelChanged
// (Native, Protected)
// Parameters:

void UWeaponFireComponent::OnRep_FireRateAccelChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnRep_FireRateAccelChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponFireComponent.OnRep_ClientFireSequenceState
// (Native, Protected)
// Parameters:

void UWeaponFireComponent::OnRep_ClientFireSequenceState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnRep_ClientFireSequenceState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponFireComponent.OnReloadAmmoGiven
// (Native, Protected)
// Parameters:

void UWeaponFireComponent::OnReloadAmmoGiven()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnReloadAmmoGiven");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponFireComponent.OnLoopingFireActionEnd
// (Final, Native, Protected)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponFireComponent::OnLoopingFireActionEnd(enum class EGbxActionEndState EndState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnLoopingFireActionEnd");

	Params::UWeaponFireComponent_OnLoopingFireActionEnd_Params Parms{};

	Parms.EndState = EndState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponFireComponent.OnGivenTo
// (Final, Native, Protected)
// Parameters:

void UWeaponFireComponent::OnGivenTo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "OnGivenTo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponFireComponent.IsFireRateAccelEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponFireComponent::IsFireRateAccelEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "IsFireRateAccelEnabled");

	Params::UWeaponFireComponent_IsFireRateAccelEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponFireComponent.GetLockedTarget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UWeaponFireComponent::GetLockedTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "GetLockedTarget");

	Params::UWeaponFireComponent_GetLockedTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponFireComponent.GetFireRatePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponFireComponent::GetFireRatePercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "GetFireRatePercent");

	Params::UWeaponFireComponent_GetFireRatePercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponFireComponent.ClientStopResetFireSequence
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void UWeaponFireComponent::ClientStopResetFireSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireComponent", "ClientStopResetFireSequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponFireProjectileComponent
// (None)

class UClass* UWeaponFireProjectileComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponFireProjectileComponent");

	return Clss;
}


// WeaponFireProjectileComponent GbxWeapon.Default__WeaponFireProjectileComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponFireProjectileComponent* UWeaponFireProjectileComponent::GetDefaultObj()
{
	static class UWeaponFireProjectileComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponFireProjectileComponent*>(UWeaponFireProjectileComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponFireProjectileComponent.GetShotProjectileData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class AActor>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class AActor> UWeaponFireProjectileComponent::GetShotProjectileData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireProjectileComponent", "GetShotProjectileData");

	Params::UWeaponFireProjectileComponent_GetShotProjectileData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponFireProjectileComponent.GetShotLightProjectileData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULightProjectileData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULightProjectileData> UWeaponFireProjectileComponent::GetShotLightProjectileData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireProjectileComponent", "GetShotLightProjectileData");

	Params::UWeaponFireProjectileComponent_GetShotLightProjectileData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxWeapon.Weapon
// (Actor)

class UClass* AWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Weapon");

	return Clss;
}


// Weapon GbxWeapon.Default__Weapon
// (Public, ClassDefaultObject, ArchetypeObject)

class AWeapon* AWeapon::GetDefaultObj()
{
	static class AWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapon*>(AWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.Weapon.Unlock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReplicate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::Unlock(bool bReplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "Unlock");

	Params::AWeapon_Unlock_Params Parms{};

	Parms.bReplicate = bReplicate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.TryAutoReload
// (Final, Native, Protected)
// Parameters:

void AWeapon::TryAutoReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "TryAutoReload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ToggleMode
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ToggleMode(uint8 InputChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ToggleMode");

	Params::AWeapon_ToggleMode_Params Parms{};

	Parms.InputChannel = InputChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SwitchPendingUseMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AWeapon::SwitchPendingUseMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SwitchPendingUseMode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SwitchMode
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NextUseModeIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForced                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::SwitchMode(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SwitchMode");

	Params::AWeapon_SwitchMode_Params Parms{};

	Parms.InputChannel = InputChannel;
	Parms.NextUseModeIndex = NextUseModeIndex;
	Parms.bForced = bForced;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StopZooming
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSkipTransitions                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClearInput                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::StopZooming(bool bSkipTransitions, bool bClearInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StopZooming");

	Params::AWeapon_StopZooming_Params Parms{};

	Parms.bSkipTransitions = bSkipTransitions;
	Parms.bClearInput = bClearInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StopWeaponAction
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EWeaponActionType       WeaponAction                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::StopWeaponAction(enum class EWeaponActionType WeaponAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StopWeaponAction");

	Params::AWeapon_StopWeaponAction_Params Parms{};

	Parms.WeaponAction = WeaponAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StopUsing
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForced                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::StopUsing(uint8 InputChannel, bool bForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StopUsing");

	Params::AWeapon_StopUsing_Params Parms{};

	Parms.InputChannel = InputChannel;
	Parms.bForced = bForced;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StopReloading
// (Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::StopReloading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StopReloading");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StopModeSwitch
// (Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::StopModeSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StopModeSwitch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StopEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWeaponEffectType       EffectType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UseModeIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::StopEffects(enum class EWeaponEffectType EffectType, uint8 UseModeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StopEffects");

	Params::AWeapon_StopEffects_Params Parms{};

	Parms.EffectType = EffectType;
	Parms.UseModeIndex = UseModeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StopDynamicMaterialEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              EffectID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::StopDynamicMaterialEffect(int32 EffectID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StopDynamicMaterialEffect");

	Params::AWeapon_StopDynamicMaterialEffect_Params Parms{};

	Parms.EffectID = EffectID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StopAnimation
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Anim                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFirstPerson                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::StopAnimation(class UAnimMontage* Anim, bool bFirstPerson)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StopAnimation");

	Params::AWeapon_StopAnimation_Params Parms{};

	Parms.Anim = Anim;
	Parms.bFirstPerson = bFirstPerson;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StartZooming
// (Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::StartZooming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StartZooming");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StartUsing
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::StartUsing(uint8 InputChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StartUsing");

	Params::AWeapon_StartUsing_Params Parms{};

	Parms.InputChannel = InputChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.StartReloading
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAuto                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::StartReloading(bool bAuto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "StartReloading");

	Params::AWeapon_StartReloading_Params Parms{};

	Parms.bAuto = bAuto;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetTargetLocked
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsLocked                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::SetTargetLocked(bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetTargetLocked");

	Params::AWeapon_SetTargetLocked_Params Parms{};

	Parms.bIsLocked = bIsLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetPreUseState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              UseModeIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::SetPreUseState(uint8 UseModeIndex, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetPreUseState");

	Params::AWeapon_SetPreUseState_Params Parms{};

	Parms.UseModeIndex = UseModeIndex;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetMaterialVectorParameterValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ParamValue                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::SetMaterialVectorParameterValue(class FName ParamName, const struct FLinearColor& ParamValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetMaterialVectorParameterValue");

	Params::AWeapon_SetMaterialVectorParameterValue_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetMaterialScalarParameterValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ParamValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::SetMaterialScalarParameterValue(class FName ParamName, float ParamValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetMaterialScalarParameterValue");

	Params::AWeapon_SetMaterialScalarParameterValue_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetEffectVectorParameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ParamValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWeaponEffectQueryData      QueryData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AWeapon::SetEffectVectorParameter(class FName ParamName, struct FVector& ParamValue, struct FWeaponEffectQueryData& QueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetEffectVectorParameter");

	Params::AWeapon_SetEffectVectorParameter_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;
	Parms.QueryData = QueryData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetEffectMaterialParameter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ParamValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWeaponEffectQueryData      QueryData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AWeapon::SetEffectMaterialParameter(class FName ParamName, class UMaterialInterface* ParamValue, struct FWeaponEffectQueryData& QueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetEffectMaterialParameter");

	Params::AWeapon_SetEffectMaterialParameter_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;
	Parms.QueryData = QueryData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetEffectFloatParameter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ParamValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWeaponEffectQueryData      QueryData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AWeapon::SetEffectFloatParameter(class FName ParamName, float ParamValue, struct FWeaponEffectQueryData& QueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetEffectFloatParameter");

	Params::AWeapon_SetEffectFloatParameter_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;
	Parms.QueryData = QueryData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetEffectEmitterState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWeaponEffectQueryData      QueryData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AWeapon::SetEffectEmitterState(class FName EmitterName, bool bEnabled, struct FWeaponEffectQueryData& QueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetEffectEmitterState");

	Params::AWeapon_SetEffectEmitterState_Params Parms{};

	Parms.EmitterName = EmitterName;
	Parms.bEnabled = bEnabled;
	Parms.QueryData = QueryData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetEffectColorParameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ParamValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWeaponEffectQueryData      QueryData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AWeapon::SetEffectColorParameter(class FName ParamName, struct FLinearColor& ParamValue, struct FWeaponEffectQueryData& QueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetEffectColorParameter");

	Params::AWeapon_SetEffectColorParameter_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;
	Parms.QueryData = QueryData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.SetBoneVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWeaponAttachmentVisibilityTypeAttachmentType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::SetBoneVisibility(class FName BoneName, bool bVisible, enum class EWeaponAttachmentVisibilityType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "SetBoneVisibility");

	Params::AWeapon_SetBoneVisibility_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.bVisible = bVisible;
	Parms.AttachmentType = AttachmentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerUnlock
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void AWeapon::ServerUnlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerUnlock");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerSwitchMode
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NextUseModeIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForced                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerSwitchMode(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerSwitchMode");

	Params::AWeapon_ServerSwitchMode_Params Parms{};

	Parms.InputChannel = InputChannel;
	Parms.NextUseModeIndex = NextUseModeIndex;
	Parms.bForced = bForced;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerStopUsing
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForced                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerStopUsing(uint8 InputChannel, bool bForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerStopUsing");

	Params::AWeapon_ServerStopUsing_Params Parms{};

	Parms.InputChannel = InputChannel;
	Parms.bForced = bForced;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerStopModeSwitch
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ClientUseModeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerStopModeSwitch(uint8 InputChannel, uint8 ClientUseModeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerStopModeSwitch");

	Params::AWeapon_ServerStopModeSwitch_Params Parms{};

	Parms.InputChannel = InputChannel;
	Parms.ClientUseModeIndex = ClientUseModeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerStartUsing
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ClientPatternSeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerStartUsing(uint8 InputChannel, uint8 ClientPatternSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerStartUsing");

	Params::AWeapon_ServerStartUsing_Params Parms{};

	Parms.InputChannel = InputChannel;
	Parms.ClientPatternSeed = ClientPatternSeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerStartReloading
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              UseModeIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAuto                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerStartReloading(uint8 UseModeIndex, bool bAuto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerStartReloading");

	Params::AWeapon_ServerStartReloading_Params Parms{};

	Parms.UseModeIndex = UseModeIndex;
	Parms.bAuto = bAuto;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerSetZoomState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              UseModeIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWeaponZoomState            NewState                                                         (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ZoomStartOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerSetZoomState(uint8 UseModeIndex, struct FWeaponZoomState& NewState, float ZoomStartOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerSetZoomState");

	Params::AWeapon_ServerSetZoomState_Params Parms{};

	Parms.UseModeIndex = UseModeIndex;
	Parms.NewState = NewState;
	Parms.ZoomStartOffset = ZoomStartOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerSetPatternSeed
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              ClientPatternSeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerSetPatternSeed(uint8 ClientPatternSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerSetPatternSeed");

	Params::AWeapon_ServerSetPatternSeed_Params Parms{};

	Parms.ClientPatternSeed = ClientPatternSeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerRestartAutoUse
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void AWeapon::ServerRestartAutoUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerRestartAutoUse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerLock
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerLock(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerLock");

	Params::AWeapon_ServerLock_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerInterruptReloadToUse
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int32                              ClientLoadedAmmo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ServerInterruptReloadToUse(int32 ClientLoadedAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerInterruptReloadToUse");

	Params::AWeapon_ServerInterruptReloadToUse_Params Parms{};

	Parms.ClientLoadedAmmo = ClientLoadedAmmo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ServerEquipInterruptible
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void AWeapon::ServerEquipInterruptible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ServerEquipInterruptible");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.RegisterSkeletalControl
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FWeaponRegisterSkeletalControlDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AWeapon::RegisterSkeletalControl(struct FWeaponRegisterSkeletalControlData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "RegisterSkeletalControl");

	Params::AWeapon_RegisterSkeletalControl_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.RegisterSimpleEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWeaponEffectType       EffectType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*             Effect                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EffectSocket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::RegisterSimpleEffect(enum class EWeaponEffectType EffectType, class UParticleSystem* Effect, class FName EffectSocket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "RegisterSimpleEffect");

	Params::AWeapon_RegisterSimpleEffect_Params Parms{};

	Parms.EffectType = EffectType;
	Parms.Effect = Effect;
	Parms.EffectSocket = EffectSocket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.RegisterMaterialEffect
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FWeaponRegisterMaterialEffectDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AWeapon::RegisterMaterialEffect(struct FWeaponRegisterMaterialEffectData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "RegisterMaterialEffect");

	Params::AWeapon_RegisterMaterialEffect_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.RegisterEffect
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FWeaponRegisterAttachmentEffectDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AWeapon::RegisterEffect(struct FWeaponRegisterAttachmentEffectData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "RegisterEffect");

	Params::AWeapon_RegisterEffect_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ReevaluateConditionalEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::ReevaluateConditionalEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ReevaluateConditionalEffects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.PrevZoomLevel
// (Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::PrevZoomLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "PrevZoomLevel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.PlayEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWeaponEffectType       EffectType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UseModeIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EffectID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::PlayEffects(enum class EWeaponEffectType EffectType, uint8 UseModeIndex, int32 EffectID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "PlayEffects");

	Params::AWeapon_PlayEffects_Params Parms{};

	Parms.EffectType = EffectType;
	Parms.UseModeIndex = UseModeIndex;
	Parms.EffectID = EffectID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.PlayDynamicMaterialEffect
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FWeaponMaterialEffectData   Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AWeapon::PlayDynamicMaterialEffect(struct FWeaponMaterialEffectData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "PlayDynamicMaterialEffect");

	Params::AWeapon_PlayDynamicMaterialEffect_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.PlayAnimation
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Anim                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFirstPerson                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWeapon::PlayAnimation(class UAnimMontage* Anim, bool bFirstPerson, float PlayRate, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "PlayAnimation");

	Params::AWeapon_PlayAnimation_Params Parms{};

	Parms.Anim = Anim;
	Parms.bFirstPerson = bFirstPerson;
	Parms.PlayRate = PlayRate;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.OnZoomedOut
// (Native, Protected)
// Parameters:

void AWeapon::OnZoomedOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnZoomedOut");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnUseStarted
// (Native, Protected)
// Parameters:

void AWeapon::OnUseStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnUseStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnUseFinished
// (Native, Protected)
// Parameters:

void AWeapon::OnUseFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnUseFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUseFinishes
// (Final, Native, Protected)
// Parameters:

void AWeapon::OnUpdateSkeletalControlsWhenUseFinishes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnUpdateSkeletalControlsWhenUseFinishes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUsed
// (Final, Native, Protected)
// Parameters:

void AWeapon::OnUpdateSkeletalControlsWhenUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnUpdateSkeletalControlsWhenUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenAmmoChanges
// (Final, Native, Protected)
// Parameters:

void AWeapon::OnUpdateSkeletalControlsWhenAmmoChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnUpdateSkeletalControlsWhenAmmoChanges");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnRep_TargetLockedChanged
// (Final, Native, Protected)
// Parameters:

void AWeapon::OnRep_TargetLockedChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnRep_TargetLockedChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnRep_PendingUseModeIndex
// (Final, Native, Protected)
// Parameters:

void AWeapon::OnRep_PendingUseModeIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnRep_PendingUseModeIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnRep_PendingAttachState
// (Final, Native, Protected)
// Parameters:

void AWeapon::OnRep_PendingAttachState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnRep_PendingAttachState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnRep_CurrentUseModeIndex
// (Final, Native, Protected)
// Parameters:
// uint8                              PreviousUseModeIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::OnRep_CurrentUseModeIndex(uint8 PreviousUseModeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnRep_CurrentUseModeIndex");

	Params::AWeapon_OnRep_CurrentUseModeIndex_Params Parms{};

	Parms.PreviousUseModeIndex = PreviousUseModeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnReloadEnded
// (Native, Protected)
// Parameters:
// bool                               bCompleted                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAmmoGiven                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::OnReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnReloadEnded");

	Params::AWeapon_OnReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.OnAmmoGivenToEmptyWeapon
// (Final, Native, Protected)
// Parameters:

void AWeapon::OnAmmoGivenToEmptyWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "OnAmmoGivenToEmptyWeapon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.NotifySkeletalControl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWeaponEffectType       ControlType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWeaponSkeletalControlEventEvent                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EventValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::NotifySkeletalControl(enum class EWeaponEffectType ControlType, class FName ControlName, enum class EWeaponSkeletalControlEvent Event, float EventValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "NotifySkeletalControl");

	Params::AWeapon_NotifySkeletalControl_Params Parms{};

	Parms.ControlType = ControlType;
	Parms.ControlName = ControlName;
	Parms.Event = Event;
	Parms.EventValue = EventValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.NextZoomLevel
// (Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::NextZoomLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "NextZoomLevel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.Lock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplicate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::Lock(float Duration, bool bReplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "Lock");

	Params::AWeapon_Lock_Params Parms{};

	Parms.Duration = Duration;
	Parms.bReplicate = bReplicate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.K2_StopWeaponActionObj
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*                  WeaponAction                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::K2_StopWeaponActionObj(class UGbxAction* WeaponAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "K2_StopWeaponActionObj");

	Params::AWeapon_K2_StopWeaponActionObj_Params Parms{};

	Parms.WeaponAction = WeaponAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.K2_PlayWeaponActionEx
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// enum class EWeaponActionType       WeaponAction                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActionState_Base           ActionParams                                                     (Parm, NativeAccessSpecifierPublic)
// bool                               bCheckForRelevancy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxAction*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxAction* AWeapon::K2_PlayWeaponActionEx(enum class EWeaponActionType WeaponAction, const struct FActionState_Base& ActionParams, bool bCheckForRelevancy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "K2_PlayWeaponActionEx");

	Params::AWeapon_K2_PlayWeaponActionEx_Params Parms{};

	Parms.WeaponAction = WeaponAction;
	Parms.ActionParams = ActionParams;
	Parms.bCheckForRelevancy = bCheckForRelevancy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.K2_PlayWeaponAction
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// enum class EWeaponActionType       WeaponAction                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCheckForRelevancy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxAction*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxAction* AWeapon::K2_PlayWeaponAction(enum class EWeaponActionType WeaponAction, float PlayRate, float Duration, bool bCheckForRelevancy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "K2_PlayWeaponAction");

	Params::AWeapon_K2_PlayWeaponAction_Params Parms{};

	Parms.WeaponAction = WeaponAction;
	Parms.PlayRate = PlayRate;
	Parms.Duration = Duration;
	Parms.bCheckForRelevancy = bCheckForRelevancy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsZoomedIn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeTransitions                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsZoomedIn(bool bIncludeTransitions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsZoomedIn");

	Params::AWeapon_IsZoomedIn_Params Parms{};

	Parms.bIncludeTransitions = bIncludeTransitions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsZoomed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsZoomed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsZoomed");

	Params::AWeapon_IsZoomed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsUsing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsUsing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsUsing");

	Params::AWeapon_IsUsing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsTargetLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsTargetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsTargetLocked");

	Params::AWeapon_IsTargetLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsSwitchingModes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsSwitchingModes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsSwitchingModes");

	Params::AWeapon_IsSwitchingModes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsReloading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsReloading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsReloading");

	Params::AWeapon_IsReloading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsPuttingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsPuttingDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsPuttingDown");

	Params::AWeapon_IsPuttingDown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsPendingUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsPendingUse(uint8 InputChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsPendingUse");

	Params::AWeapon_IsPendingUse_Params Parms{};

	Parms.InputChannel = InputChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsLocked");

	Params::AWeapon_IsLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsLocalAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsLocalAuthority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsLocalAuthority");

	Params::AWeapon_IsLocalAuthority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsInactive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsInactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsInactive");

	Params::AWeapon_IsInactive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsEquipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsEquipping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsEquipping");

	Params::AWeapon_IsEquipping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsAuthorityUsing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsAuthorityUsing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsAuthorityUsing");

	Params::AWeapon_IsAuthorityUsing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsAuthoritySwitchingModes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsAuthoritySwitchingModes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsAuthoritySwitchingModes");

	Params::AWeapon_IsAuthoritySwitchingModes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsAuthorityReloading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsAuthorityReloading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsAuthorityReloading");

	Params::AWeapon_IsAuthorityReloading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsAuthorityPuttingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsAuthorityPuttingDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsAuthorityPuttingDown");

	Params::AWeapon_IsAuthorityPuttingDown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsAuthorityEquipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsAuthorityEquipping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsAuthorityEquipping");

	Params::AWeapon_IsAuthorityEquipping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeapon::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "IsActive");

	Params::AWeapon_IsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GivenTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                       NewOwner                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::GivenTo(class APawn* NewOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GivenTo");

	Params::AWeapon_GivenTo_Params Parms{};

	Parms.NewOwner = NewOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.GetZoomFOVScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWeapon::GetZoomFOVScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetZoomFOVScale");

	Params::AWeapon_GetZoomFOVScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetZoomEffect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWeapon::GetZoomEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetZoomEffect");

	Params::AWeapon_GetZoomEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetZoomDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWeapon::GetZoomDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetZoomDuration");

	Params::AWeapon_GetZoomDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetUseModeComponentByClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UActorComponent> ComponentClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UseModeIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActorComponent* AWeapon::GetUseModeComponentByClass(TSubclassOf<class UActorComponent> ComponentClass, uint8 UseModeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetUseModeComponentByClass");

	Params::AWeapon_GetUseModeComponentByClass_Params Parms{};

	Parms.ComponentClass = ComponentClass;
	Parms.UseModeIndex = UseModeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetMuteADSAlpha
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWeapon::GetMuteADSAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetMuteADSAlpha");

	Params::AWeapon_GetMuteADSAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetMaxZoomFOVScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWeapon::GetMaxZoomFOVScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetMaxZoomFOVScale");

	Params::AWeapon_GetMaxZoomFOVScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetLastInputChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 AWeapon::GetLastInputChannel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetLastInputChannel");

	Params::AWeapon_GetLastInputChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetCurrentReloadPartType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 AWeapon::GetCurrentReloadPartType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetCurrentReloadPartType");

	Params::AWeapon_GetCurrentReloadPartType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetAttachmentMesh
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bFirstPerson                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMeshComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMeshComponent* AWeapon::GetAttachmentMesh(bool bFirstPerson, uint8 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetAttachmentMesh");

	Params::AWeapon_GetAttachmentMesh_Params Parms{};

	Parms.bFirstPerson = bFirstPerson;
	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetAssociatedUseModeComponentByClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UActorComponent> ComponentClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             ReferenceComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActorComponent* AWeapon::GetAssociatedUseModeComponentByClass(TSubclassOf<class UActorComponent> ComponentClass, class UActorComponent* ReferenceComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetAssociatedUseModeComponentByClass");

	Params::AWeapon_GetAssociatedUseModeComponentByClass_Params Parms{};

	Parms.ComponentClass = ComponentClass;
	Parms.ReferenceComponent = ReferenceComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.GetAimAssistParameters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAimAssistParameters*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAimAssistParameters* AWeapon::GetAimAssistParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "GetAimAssistParameters");

	Params::AWeapon_GetAimAssistParameters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.ForceResetZoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::ForceResetZoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ForceResetZoom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.EquipInterruptible
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::EquipInterruptible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "EquipInterruptible");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.Dropped
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::Dropped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "Dropped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.CycleZoomLevel
// (Native, Public, BlueprintCallable)
// Parameters:

void AWeapon::CycleZoomLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "CycleZoomLevel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ClientUnlock
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void AWeapon::ClientUnlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ClientUnlock");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ClientStopReloading
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void AWeapon::ClientStopReloading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ClientStopReloading");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ClientSetModeSwitch
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ServerUseModeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ClientSetModeSwitch(uint8 InputChannel, uint8 ServerUseModeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ClientSetModeSwitch");

	Params::AWeapon_ClientSetModeSwitch_Params Parms{};

	Parms.InputChannel = InputChannel;
	Parms.ServerUseModeIndex = ServerUseModeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.ClientLock
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::ClientLock(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "ClientLock");

	Params::AWeapon_ClientLock_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.Weapon.AddUseMode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWeaponUseComponent*         UseComponent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActorComponent*>     OtherComponents                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              InputChannels                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 AWeapon::AddUseMode(class UWeaponUseComponent* UseComponent, TArray<class UActorComponent*>& OtherComponents, int32 InputChannels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "AddUseMode");

	Params::AWeapon_AddUseMode_Params Parms{};

	Parms.UseComponent = UseComponent;
	Parms.OtherComponents = OtherComponents;
	Parms.InputChannels = InputChannels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.Weapon.Activate
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                       WeaponOwner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InSlot                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWeaponEquipType        InEquipType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeapon::Activate(class APawn* WeaponOwner, uint8 InSlot, enum class EWeaponEquipType InEquipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weapon", "Activate");

	Params::AWeapon_Activate_Params Parms{};

	Parms.WeaponOwner = WeaponOwner;
	Parms.InSlot = InSlot;
	Parms.InEquipType = InEquipType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponAnimInstance
// (None)

class UClass* UWeaponAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAnimInstance");

	return Clss;
}


// WeaponAnimInstance GbxWeapon.Default__WeaponAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAnimInstance* UWeaponAnimInstance::GetDefaultObj()
{
	static class UWeaponAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAnimInstance*>(UWeaponAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponAnimInstance.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponAnimInstance::BlueprintSwitchedMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAnimInstance", "BlueprintSwitchedMode");

	Params::UWeaponAnimInstance_BlueprintSwitchedMode_Params Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxWeapon.WeaponAudioProviderComponent
// (None)

class UClass* UWeaponAudioProviderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAudioProviderComponent");

	return Clss;
}


// WeaponAudioProviderComponent GbxWeapon.Default__WeaponAudioProviderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAudioProviderComponent* UWeaponAudioProviderComponent::GetDefaultObj()
{
	static class UWeaponAudioProviderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAudioProviderComponent*>(UWeaponAudioProviderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WalkingProjectileMovementComponent
// (None)

class UClass* UWalkingProjectileMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WalkingProjectileMovementComponent");

	return Clss;
}


// WalkingProjectileMovementComponent GbxWeapon.Default__WalkingProjectileMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWalkingProjectileMovementComponent* UWalkingProjectileMovementComponent::GetDefaultObj()
{
	static class UWalkingProjectileMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWalkingProjectileMovementComponent*>(UWalkingProjectileMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponAmmoComponent
// (None)

class UClass* UWeaponAmmoComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAmmoComponent");

	return Clss;
}


// WeaponAmmoComponent GbxWeapon.Default__WeaponAmmoComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAmmoComponent* UWeaponAmmoComponent::GetDefaultObj()
{
	static class UWeaponAmmoComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAmmoComponent*>(UWeaponAmmoComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponAmmoComponent.ClientRefillAmmo
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponAmmoComponent::ClientRefillAmmo(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAmmoComponent", "ClientRefillAmmo");

	Params::UWeaponAmmoComponent_ClientRefillAmmo_Params Parms{};

	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponHeatComponent
// (None)

class UClass* UWeaponHeatComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponHeatComponent");

	return Clss;
}


// WeaponHeatComponent GbxWeapon.Default__WeaponHeatComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponHeatComponent* UWeaponHeatComponent::GetDefaultObj()
{
	static class UWeaponHeatComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponHeatComponent*>(UWeaponHeatComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponHeatComponent.SetCanUseWhenOverheated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponHeatComponent::SetCanUseWhenOverheated(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "SetCanUseWhenOverheated");

	Params::UWeaponHeatComponent_SetCanUseWhenOverheated_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponHeatComponent.OnUseFinished
// (Native, Protected)
// Parameters:

void UWeaponHeatComponent::OnUseFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnUseFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponHeatComponent.OnUsed
// (Native, Protected)
// Parameters:

void UWeaponHeatComponent::OnUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponHeatComponent.OnStopOverheat
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWeaponHeatComponent::OnStopOverheat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnStopOverheat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponHeatComponent.OnStartOverheat
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWeaponHeatComponent::OnStartOverheat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnStartOverheat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponHeatComponent.OnRep_ReplicatedHeat
// (Final, Native, Protected)
// Parameters:

void UWeaponHeatComponent::OnRep_ReplicatedHeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnRep_ReplicatedHeat");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponHeatComponent.OnRep_Overheated
// (Final, Native, Protected)
// Parameters:
// bool                               bWasOverheated                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponHeatComponent::OnRep_Overheated(bool bWasOverheated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnRep_Overheated");

	Params::UWeaponHeatComponent_OnRep_Overheated_Params Parms{};

	Parms.bWasOverheated = bWasOverheated;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponHeatComponent.OnPutDown
// (Native, Protected)
// Parameters:

void UWeaponHeatComponent::OnPutDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnPutDown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponHeatComponent.OnEquipped
// (Native, Protected)
// Parameters:

void UWeaponHeatComponent::OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnEquipped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponHeatComponent.OnDetached
// (Native, Protected)
// Parameters:

void UWeaponHeatComponent::OnDetached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnDetached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponHeatComponent.OnAttached
// (Native, Protected)
// Parameters:

void UWeaponHeatComponent::OnAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponHeatComponent", "OnAttached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponReloadComponent
// (None)

class UClass* UWeaponReloadComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponReloadComponent");

	return Clss;
}


// WeaponReloadComponent GbxWeapon.Default__WeaponReloadComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponReloadComponent* UWeaponReloadComponent::GetDefaultObj()
{
	static class UWeaponReloadComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponReloadComponent*>(UWeaponReloadComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponZoomComponent
// (None)

class UClass* UWeaponZoomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponZoomComponent");

	return Clss;
}


// WeaponZoomComponent GbxWeapon.Default__WeaponZoomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponZoomComponent* UWeaponZoomComponent::GetDefaultObj()
{
	static class UWeaponZoomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponZoomComponent*>(UWeaponZoomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponZoomComponent.OnSwitchedWeaponMode
// (Native, Protected)
// Parameters:

void UWeaponZoomComponent::OnSwitchedWeaponMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponZoomComponent", "OnSwitchedWeaponMode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponZoomComponent.OnRep_ReplicatedZoomState
// (Final, Native, Protected)
// Parameters:

void UWeaponZoomComponent::OnRep_ReplicatedZoomState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponZoomComponent", "OnRep_ReplicatedZoomState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponZoomComponent.OnDetached
// (Native, Protected)
// Parameters:

void UWeaponZoomComponent::OnDetached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponZoomComponent", "OnDetached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponZoomComponent.OnAttached
// (Native, Protected)
// Parameters:

void UWeaponZoomComponent::OnAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponZoomComponent", "OnAttached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScaleWithMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ModeIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponZoomComponent::GetMaxZoomFOVScaleWithMode(uint8 ModeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponZoomComponent", "GetMaxZoomFOVScaleWithMode");

	Params::UWeaponZoomComponent_GetMaxZoomFOVScaleWithMode_Params Parms{};

	Parms.ModeIndex = ModeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponZoomComponent::GetMaxZoomFOVScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponZoomComponent", "GetMaxZoomFOVScale");

	Params::UWeaponZoomComponent_GetMaxZoomFOVScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxWeapon.AmmoProviderInterface
// (None)

class UClass* IAmmoProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmmoProviderInterface");

	return Clss;
}


// AmmoProviderInterface GbxWeapon.Default__AmmoProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAmmoProviderInterface* IAmmoProviderInterface::GetDefaultObj()
{
	static class IAmmoProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAmmoProviderInterface*>(IAmmoProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponAnimNotify
// (None)

class UClass* UWeaponAnimNotify::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAnimNotify");

	return Clss;
}


// WeaponAnimNotify GbxWeapon.Default__WeaponAnimNotify
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAnimNotify* UWeaponAnimNotify::GetDefaultObj()
{
	static class UWeaponAnimNotify* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAnimNotify*>(UWeaponAnimNotify::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.AnimNotify_AmmoReloaded
// (None)

class UClass* UAnimNotify_AmmoReloaded::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_AmmoReloaded");

	return Clss;
}


// AnimNotify_AmmoReloaded GbxWeapon.Default__AnimNotify_AmmoReloaded
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_AmmoReloaded* UAnimNotify_AmmoReloaded::GetDefaultObj()
{
	static class UAnimNotify_AmmoReloaded* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_AmmoReloaded*>(UAnimNotify_AmmoReloaded::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.AnimNotify_EquipInterruptible
// (None)

class UClass* UAnimNotify_EquipInterruptible::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_EquipInterruptible");

	return Clss;
}


// AnimNotify_EquipInterruptible GbxWeapon.Default__AnimNotify_EquipInterruptible
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_EquipInterruptible* UAnimNotify_EquipInterruptible::GetDefaultObj()
{
	static class UAnimNotify_EquipInterruptible* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_EquipInterruptible*>(UAnimNotify_EquipInterruptible::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.AnimNotify_WeaponSkeletalControlEvent
// (None)

class UClass* UAnimNotify_WeaponSkeletalControlEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_WeaponSkeletalControlEvent");

	return Clss;
}


// AnimNotify_WeaponSkeletalControlEvent GbxWeapon.Default__AnimNotify_WeaponSkeletalControlEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_WeaponSkeletalControlEvent* UAnimNotify_WeaponSkeletalControlEvent::GetDefaultObj()
{
	static class UAnimNotify_WeaponSkeletalControlEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_WeaponSkeletalControlEvent*>(UAnimNotify_WeaponSkeletalControlEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.BodyWeaponHoldData
// (None)

class UClass* UBodyWeaponHoldData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyWeaponHoldData");

	return Clss;
}


// BodyWeaponHoldData GbxWeapon.Default__BodyWeaponHoldData
// (Public, ClassDefaultObject, ArchetypeObject)

class UBodyWeaponHoldData* UBodyWeaponHoldData::GetDefaultObj()
{
	static class UBodyWeaponHoldData* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyWeaponHoldData*>(UBodyWeaponHoldData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.BodyWeaponHoldManagerComponent
// (None)

class UClass* UBodyWeaponHoldManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyWeaponHoldManagerComponent");

	return Clss;
}


// BodyWeaponHoldManagerComponent GbxWeapon.Default__BodyWeaponHoldManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBodyWeaponHoldManagerComponent* UBodyWeaponHoldManagerComponent::GetDefaultObj()
{
	static class UBodyWeaponHoldManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyWeaponHoldManagerComponent*>(UBodyWeaponHoldManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.EnvQueryContext_ProjectileProxy
// (None)

class UClass* UEnvQueryContext_ProjectileProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_ProjectileProxy");

	return Clss;
}


// EnvQueryContext_ProjectileProxy GbxWeapon.Default__EnvQueryContext_ProjectileProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_ProjectileProxy* UEnvQueryContext_ProjectileProxy::GetDefaultObj()
{
	static class UEnvQueryContext_ProjectileProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_ProjectileProxy*>(UEnvQueryContext_ProjectileProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.EnvQueryGenerator_FindProjectileTargets
// (None)

class UClass* UEnvQueryGenerator_FindProjectileTargets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_FindProjectileTargets");

	return Clss;
}


// EnvQueryGenerator_FindProjectileTargets GbxWeapon.Default__EnvQueryGenerator_FindProjectileTargets
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_FindProjectileTargets* UEnvQueryGenerator_FindProjectileTargets::GetDefaultObj()
{
	static class UEnvQueryGenerator_FindProjectileTargets* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_FindProjectileTargets*>(UEnvQueryGenerator_FindProjectileTargets::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.EnvQueryItemType_ProjectileProxy
// (None)

class UClass* UEnvQueryItemType_ProjectileProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType_ProjectileProxy");

	return Clss;
}


// EnvQueryItemType_ProjectileProxy GbxWeapon.Default__EnvQueryItemType_ProjectileProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType_ProjectileProxy* UEnvQueryItemType_ProjectileProxy::GetDefaultObj()
{
	static class UEnvQueryItemType_ProjectileProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType_ProjectileProxy*>(UEnvQueryItemType_ProjectileProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.FiringPattern
// (None)

class UClass* UFiringPattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FiringPattern");

	return Clss;
}


// FiringPattern GbxWeapon.Default__FiringPattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UFiringPattern* UFiringPattern::GetDefaultObj()
{
	static class UFiringPattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UFiringPattern*>(UFiringPattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.FiringPatternData
// (None)

class UClass* UFiringPatternData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FiringPatternData");

	return Clss;
}


// FiringPatternData GbxWeapon.Default__FiringPatternData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFiringPatternData* UFiringPatternData::GetDefaultObj()
{
	static class UFiringPatternData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFiringPatternData*>(UFiringPatternData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.GbxAmmoTypeData
// (None)

class UClass* UGbxAmmoTypeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAmmoTypeData");

	return Clss;
}


// GbxAmmoTypeData GbxWeapon.Default__GbxAmmoTypeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAmmoTypeData* UGbxAmmoTypeData::GetDefaultObj()
{
	static class UGbxAmmoTypeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAmmoTypeData*>(UGbxAmmoTypeData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.GbxProjectileManager
// (None)

class UClass* UGbxProjectileManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxProjectileManager");

	return Clss;
}


// GbxProjectileManager GbxWeapon.Default__GbxProjectileManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxProjectileManager* UGbxProjectileManager::GetDefaultObj()
{
	static class UGbxProjectileManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxProjectileManager*>(UGbxProjectileManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.GbxTrajectometerComponent
// (None)

class UClass* UGbxTrajectometerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTrajectometerComponent");

	return Clss;
}


// GbxTrajectometerComponent GbxWeapon.Default__GbxTrajectometerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTrajectometerComponent* UGbxTrajectometerComponent::GetDefaultObj()
{
	static class UGbxTrajectometerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTrajectometerComponent*>(UGbxTrajectometerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.GbxTrajectometerComponent.UpdateCollisionShape
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxTrajectometerComponent::UpdateCollisionShape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTrajectometerComponent", "UpdateCollisionShape");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GbxWeapon.GbxTrajectometerComponent.SimulationResultEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxTrajectometerComponent::SimulationResultEvent__DelegateSignature(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTrajectometerComponent", "SimulationResultEvent__DelegateSignature");

	Params::UGbxTrajectometerComponent_SimulationResultEvent__DelegateSignature_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxWeapon.GbxTrajectometerComponent.SetTrajectometerEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxTrajectometerComponent::SetTrajectometerEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTrajectometerComponent", "SetTrajectometerEnabled");

	Params::UGbxTrajectometerComponent_SetTrajectometerEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.GbxTrajectometerProjectile
// (Actor)

class UClass* AGbxTrajectometerProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTrajectometerProjectile");

	return Clss;
}


// GbxTrajectometerProjectile GbxWeapon.Default__GbxTrajectometerProjectile
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxTrajectometerProjectile* AGbxTrajectometerProjectile::GetDefaultObj()
{
	static class AGbxTrajectometerProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxTrajectometerProjectile*>(AGbxTrajectometerProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.GbxWeaponUserInterface
// (None)

class UClass* IGbxWeaponUserInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxWeaponUserInterface");

	return Clss;
}


// GbxWeaponUserInterface GbxWeapon.Default__GbxWeaponUserInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxWeaponUserInterface* IGbxWeaponUserInterface::GetDefaultObj()
{
	static class IGbxWeaponUserInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxWeaponUserInterface*>(IGbxWeaponUserInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.LightBeamStatics
// (None)

class UClass* ULightBeamStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeamStatics");

	return Clss;
}


// LightBeamStatics GbxWeapon.Default__LightBeamStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightBeamStatics* ULightBeamStatics::GetDefaultObj()
{
	static class ULightBeamStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeamStatics*>(ULightBeamStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.LightBeamStatics.SetBeamFlag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightBeamInitializationDataInitData                                                         (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class ELightBeamFlag          Flag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightBeamStatics::SetBeamFlag(struct FLightBeamInitializationData& InitData, enum class ELightBeamFlag Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "SetBeamFlag");

	Params::ULightBeamStatics_SetBeamFlag_Params Parms{};

	Parms.InitData = InitData;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeamStatics.RemoveLightBeamsBySource
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NameID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightBeamStatics::RemoveLightBeamsBySource(class AActor* Source, class FName NameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "RemoveLightBeamsBySource");

	Params::ULightBeamStatics_RemoveLightBeamsBySource_Params Parms{};

	Parms.Source = Source;
	Parms.NameID = NameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeamStatics.RemoveLightBeamsByActor
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightBeamQueryData         Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULightBeamStatics::RemoveLightBeamsByActor(struct FLightBeamQueryData& Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "RemoveLightBeamsByActor");

	Params::ULightBeamStatics_RemoveLightBeamsByActor_Params Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeamStatics.IsBeamFlagSet
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightBeamInitializationDataInitData                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class ELightBeamFlag          Flag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULightBeamStatics::IsBeamFlagSet(struct FLightBeamInitializationData& InitData, enum class ELightBeamFlag Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "IsBeamFlagSet");

	Params::ULightBeamStatics_IsBeamFlagSet_Params Parms{};

	Parms.InitData = InitData;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeamStatics.ForEachLightBeam
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightBeamQueryData         Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULightBeamStatics::ForEachLightBeam(struct FLightBeamQueryData& Query, UDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "ForEachLightBeam");

	Params::ULightBeamStatics_ForEachLightBeam_Params Parms{};

	Parms.Query = Query;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeamStatics.DoesLightBeamExist
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightBeamQueryData         Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULightBeamStatics::DoesLightBeamExist(struct FLightBeamQueryData& Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "DoesLightBeamExist");

	Params::ULightBeamStatics_DoesLightBeamExist_Params Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightBeamStatics.CreateLightBeamFromData
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightBeamInitializationDataInitData                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bAsync                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForceSpawnTimer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightBeamStatics::CreateLightBeamFromData(struct FLightBeamInitializationData& InitData, bool bAsync, float ForceSpawnTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "CreateLightBeamFromData");

	Params::ULightBeamStatics_CreateLightBeamFromData_Params Parms{};

	Parms.InitData = InitData;
	Parms.bAsync = bAsync;
	Parms.ForceSpawnTimer = ForceSpawnTimer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeamStatics.CreateLightBeam
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class ULightBeamData>  Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLightBeamAttachment        Source                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FLightBeamAttachment        Target                                                           (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bTargetLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NameID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGbxDamageType>  DamageType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UDamageSource>   DamageSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UImpactData*                 ImpactDataOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FForceSelection             ImpactForce                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              LifetimeOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bViewDependent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsync                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForceSpawnTimer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightBeamStatics::CreateLightBeam(TSubclassOf<class ULightBeamData> Data, class APawn* Instigator, struct FLightBeamAttachment& Source, const struct FLightBeamAttachment& Target, bool bTargetLocked, class FName NameID, float Damage, TSubclassOf<class UGbxDamageType> DamageType, TSubclassOf<class UDamageSource> DamageSource, float DamageRadius, class AActor* DamageCauser, class UImpactData* ImpactDataOverride, const struct FForceSelection& ImpactForce, float LifetimeOverride, bool bViewDependent, bool bAsync, float ForceSpawnTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "CreateLightBeam");

	Params::ULightBeamStatics_CreateLightBeam_Params Parms{};

	Parms.Data = Data;
	Parms.Instigator = Instigator;
	Parms.Source = Source;
	Parms.Target = Target;
	Parms.bTargetLocked = bTargetLocked;
	Parms.NameID = NameID;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamageRadius = DamageRadius;
	Parms.DamageCauser = DamageCauser;
	Parms.ImpactDataOverride = ImpactDataOverride;
	Parms.ImpactForce = ImpactForce;
	Parms.LifetimeOverride = LifetimeOverride;
	Parms.bViewDependent = bViewDependent;
	Parms.bAsync = bAsync;
	Parms.ForceSpawnTimer = ForceSpawnTimer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightBeamStatics.ClearBeamFlag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightBeamInitializationDataInitData                                                         (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class ELightBeamFlag          Flag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightBeamStatics::ClearBeamFlag(struct FLightBeamInitializationData& InitData, enum class ELightBeamFlag Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBeamStatics", "ClearBeamFlag");

	Params::ULightBeamStatics_ClearBeamFlag_Params Parms{};

	Parms.InitData = InitData;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.LightProjectileMoveModifier
// (None)

class UClass* ULightProjectileMoveModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileMoveModifier");

	return Clss;
}


// LightProjectileMoveModifier GbxWeapon.Default__LightProjectileMoveModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectileMoveModifier* ULightProjectileMoveModifier::GetDefaultObj()
{
	static class ULightProjectileMoveModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectileMoveModifier*>(ULightProjectileMoveModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.LightProjectileAimViewPointHomingModifier
// (None)

class UClass* ULightProjectileAimViewPointHomingModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileAimViewPointHomingModifier");

	return Clss;
}


// LightProjectileAimViewPointHomingModifier GbxWeapon.Default__LightProjectileAimViewPointHomingModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectileAimViewPointHomingModifier* ULightProjectileAimViewPointHomingModifier::GetDefaultObj()
{
	static class ULightProjectileAimViewPointHomingModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectileAimViewPointHomingModifier*>(ULightProjectileAimViewPointHomingModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.LightProjectileCurveModifier
// (None)

class UClass* ULightProjectileCurveModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileCurveModifier");

	return Clss;
}


// LightProjectileCurveModifier GbxWeapon.Default__LightProjectileCurveModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectileCurveModifier* ULightProjectileCurveModifier::GetDefaultObj()
{
	static class ULightProjectileCurveModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectileCurveModifier*>(ULightProjectileCurveModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.LightProjectileHomingModifier
// (None)

class UClass* ULightProjectileHomingModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileHomingModifier");

	return Clss;
}


// LightProjectileHomingModifier GbxWeapon.Default__LightProjectileHomingModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectileHomingModifier* ULightProjectileHomingModifier::GetDefaultObj()
{
	static class ULightProjectileHomingModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectileHomingModifier*>(ULightProjectileHomingModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.LightProjectileRandomDrunkenModifier
// (None)

class UClass* ULightProjectileRandomDrunkenModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileRandomDrunkenModifier");

	return Clss;
}


// LightProjectileRandomDrunkenModifier GbxWeapon.Default__LightProjectileRandomDrunkenModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectileRandomDrunkenModifier* ULightProjectileRandomDrunkenModifier::GetDefaultObj()
{
	static class ULightProjectileRandomDrunkenModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectileRandomDrunkenModifier*>(ULightProjectileRandomDrunkenModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.LightProjectileStatics
// (None)

class UClass* ULightProjectileStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileStatics");

	return Clss;
}


// LightProjectileStatics GbxWeapon.Default__LightProjectileStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectileStatics* ULightProjectileStatics::GetDefaultObj()
{
	static class ULightProjectileStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectileStatics*>(ULightProjectileStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.LightProjectileStatics.SplitLightProjectile
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULightProjectile*            Projectile                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULightProjectileData>Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELightProjectileSplitPatternPattern                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpreadAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotateAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OffsetDistance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDestroySource                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileStatics::SplitLightProjectile(class ULightProjectile* Projectile, TSubclassOf<class ULightProjectileData> Data, enum class ELightProjectileSplitPattern Pattern, int32 Count, float SpreadAngle, float RotateAngle, float OffsetDistance, bool bDestroySource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "SplitLightProjectile");

	Params::ULightProjectileStatics_SplitLightProjectile_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Data = Data;
	Parms.Pattern = Pattern;
	Parms.Count = Count;
	Parms.SpreadAngle = SpreadAngle;
	Parms.RotateAngle = RotateAngle;
	Parms.OffsetDistance = OffsetDistance;
	Parms.bDestroySource = bDestroySource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.SetProjectileFlag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightProjectileInitializationDataInitData                                                         (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class ELightProjectileFlag    Flag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileStatics::SetProjectileFlag(struct FLightProjectileInitializationData& InitData, enum class ELightProjectileFlag Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "SetProjectileFlag");

	Params::ULightProjectileStatics_SetProjectileFlag_Params Parms{};

	Parms.InitData = InitData;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.SetHomingState
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightProjectileQueryData   Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsHoming                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileStatics::SetHomingState(struct FLightProjectileQueryData& Query, bool bIsHoming)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "SetHomingState");

	Params::ULightProjectileStatics_SetHomingState_Params Parms{};

	Parms.Query = Query;
	Parms.bIsHoming = bIsHoming;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.RemoveLightProjectilesByActor
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightProjectileQueryData   Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULightProjectileStatics::RemoveLightProjectilesByActor(struct FLightProjectileQueryData& Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "RemoveLightProjectilesByActor");

	Params::ULightProjectileStatics_RemoveLightProjectilesByActor_Params Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.IsProjectileFlagSet
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightProjectileInitializationDataInitData                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class ELightProjectileFlag    Flag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULightProjectileStatics::IsProjectileFlagSet(struct FLightProjectileInitializationData& InitData, enum class ELightProjectileFlag Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "IsProjectileFlagSet");

	Params::ULightProjectileStatics_IsProjectileFlagSet_Params Parms{};

	Parms.InitData = InitData;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.LightProjectileStatics.ForEachLightProjectile
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightProjectileQueryData   Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULightProjectileStatics::ForEachLightProjectile(struct FLightProjectileQueryData& Query, UDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "ForEachLightProjectile");

	Params::ULightProjectileStatics_ForEachLightProjectile_Params Parms{};

	Parms.Query = Query;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.DetonateLightProjectiles
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightProjectileQueryData   Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              StackingEnemyBonusDamage                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDetonationDelay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDetonationDelay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileStatics::DetonateLightProjectiles(struct FLightProjectileQueryData& Query, float StackingEnemyBonusDamage, float MinDetonationDelay, float MaxDetonationDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "DetonateLightProjectiles");

	Params::ULightProjectileStatics_DetonateLightProjectiles_Params Parms{};

	Parms.Query = Query;
	Parms.StackingEnemyBonusDamage = StackingEnemyBonusDamage;
	Parms.MinDetonationDelay = MinDetonationDelay;
	Parms.MaxDetonationDelay = MaxDetonationDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromSource
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULightProjectile*            SourceProjectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULightProjectileData>Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileStatics::CreateLightProjectileFromSource(class ULightProjectile* SourceProjectile, TSubclassOf<class ULightProjectileData> Data, const struct FVector& Location, const struct FVector& Direction, float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "CreateLightProjectileFromSource");

	Params::ULightProjectileStatics_CreateLightProjectileFromSource_Params Parms{};

	Parms.SourceProjectile = SourceProjectile;
	Parms.Data = Data;
	Parms.Location = Location;
	Parms.Direction = Direction;
	Parms.Damage = Damage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromDataAsync
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightProjectileInitializationDataInitData                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              ForceSpawnTimer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileStatics::CreateLightProjectileFromDataAsync(struct FLightProjectileInitializationData& InitData, float ForceSpawnTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "CreateLightProjectileFromDataAsync");

	Params::ULightProjectileStatics_CreateLightProjectileFromDataAsync_Params Parms{};

	Parms.InitData = InitData;
	Parms.ForceSpawnTimer = ForceSpawnTimer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromData
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightProjectileInitializationDataInitData                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULightProjectileStatics::CreateLightProjectileFromData(struct FLightProjectileInitializationData& InitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "CreateLightProjectileFromData");

	Params::ULightProjectileStatics_CreateLightProjectileFromData_Params Parms{};

	Parms.InitData = InitData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.CreateLightProjectile
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TSubclassOf<class ULightProjectileData>Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGbxDamageType>  DamageType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UDamageSource>   DamageSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UImpactData*                 ImpactDataOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileStatics::CreateLightProjectile(TSubclassOf<class ULightProjectileData> Data, const struct FVector& Location, const struct FVector& Direction, class APawn* Instigator, class AActor* Source, class AActor* DamageCauser, float Damage, TSubclassOf<class UGbxDamageType> DamageType, TSubclassOf<class UDamageSource> DamageSource, class UImpactData* ImpactDataOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "CreateLightProjectile");

	Params::ULightProjectileStatics_CreateLightProjectile_Params Parms{};

	Parms.Data = Data;
	Parms.Location = Location;
	Parms.Direction = Direction;
	Parms.Instigator = Instigator;
	Parms.Source = Source;
	Parms.DamageCauser = DamageCauser;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.ImpactDataOverride = ImpactDataOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.LightProjectileStatics.ClearProjectileFlag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLightProjectileInitializationDataInitData                                                         (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class ELightProjectileFlag    Flag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightProjectileStatics::ClearProjectileFlag(struct FLightProjectileInitializationData& InitData, enum class ELightProjectileFlag Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectileStatics", "ClearProjectileFlag");

	Params::ULightProjectileStatics_ClearProjectileFlag_Params Parms{};

	Parms.InitData = InitData;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.LightProjectileWaveModifier
// (None)

class UClass* ULightProjectileWaveModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectileWaveModifier");

	return Clss;
}


// LightProjectileWaveModifier GbxWeapon.Default__LightProjectileWaveModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightProjectileWaveModifier* ULightProjectileWaveModifier::GetDefaultObj()
{
	static class ULightProjectileWaveModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectileWaveModifier*>(ULightProjectileWaveModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.ProjectileBlueprintLibrary
// (None)

class UClass* UProjectileBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectileBlueprintLibrary");

	return Clss;
}


// ProjectileBlueprintLibrary GbxWeapon.Default__ProjectileBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UProjectileBlueprintLibrary* UProjectileBlueprintLibrary::GetDefaultObj()
{
	static class UProjectileBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectileBlueprintLibrary*>(UProjectileBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.ThrowProjectileAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FThrowProjectileAsyncRequestRequest                                                          (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UProjectileBlueprintLibrary::ThrowProjectileAsync(class UObject* WorldContext, const struct FThrowProjectileAsyncRequest& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "ThrowProjectileAsync");

	Params::UProjectileBlueprintLibrary_ThrowProjectileAsync_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.ThrowActorAt
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetVelocity                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPrediction                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AnglePercent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DirectionOffset                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     LocalTargetOffset                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProjectileBlueprintLibrary::ThrowActorAt(class AActor* Actor, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "ThrowActorAt");

	Params::UProjectileBlueprintLibrary_ThrowActorAt_Params Parms{};

	Parms.Actor = Actor;
	Parms.TargetLocation = TargetLocation;
	Parms.TargetVelocity = TargetVelocity;
	Parms.MaxPrediction = MaxPrediction;
	Parms.Speed = Speed;
	Parms.AnglePercent = AnglePercent;
	Parms.DirectionOffset = DirectionOffset;
	Parms.LocalTargetOffset = LocalTargetOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.PredictProjectilePathAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictProjectilePathAsyncRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UProjectileBlueprintLibrary::PredictProjectilePathAsync(class UObject* WorldContext, struct FPredictProjectilePathAsyncRequest& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "PredictProjectilePathAsync");

	Params::UProjectileBlueprintLibrary_PredictProjectilePathAsync_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform_Component
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             SourceComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              IgnoreActors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ECollisionChannel       TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UProjectileBlueprintLibrary::GetSafeProjectileThrowTransform_Component(class AActor* SourceActor, class USceneComponent* SourceComponent, class FName SocketName, TArray<class AActor*>& IgnoreActors, enum class ECollisionChannel TraceChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "GetSafeProjectileThrowTransform_Component");

	Params::UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Component_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.SourceComponent = SourceComponent;
	Parms.SocketName = SocketName;
	Parms.IgnoreActors = IgnoreActors;
	Parms.TraceChannel = TraceChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              IgnoreActors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bThrowFromFirstPersonSocket                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECollisionChannel       TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UProjectileBlueprintLibrary::GetSafeProjectileThrowTransform(class AActor* SourceActor, class FName SocketName, TArray<class AActor*>& IgnoreActors, bool bThrowFromFirstPersonSocket, enum class ECollisionChannel TraceChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "GetSafeProjectileThrowTransform");

	Params::UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.SocketName = SocketName;
	Parms.IgnoreActors = IgnoreActors;
	Parms.bThrowFromFirstPersonSocket = bThrowFromFirstPersonSocket;
	Parms.TraceChannel = TraceChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnFan
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Origin                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SampleCount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpreadAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotateAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OriginOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTransform> UProjectileBlueprintLibrary::GeneratePointsOnFan(const struct FVector& Origin, const struct FVector& Direction, int32 SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "GeneratePointsOnFan");

	Params::UProjectileBlueprintLibrary_GeneratePointsOnFan_Params Parms{};

	Parms.Origin = Origin;
	Parms.Direction = Direction;
	Parms.SampleCount = SampleCount;
	Parms.SpreadAngle = SpreadAngle;
	Parms.RotateAngle = RotateAngle;
	Parms.OriginOffset = OriginOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnCone
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Origin                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SampleCount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpreadAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotateAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OriginOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTransform> UProjectileBlueprintLibrary::GeneratePointsOnCone(const struct FVector& Origin, const struct FVector& Direction, int32 SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "GeneratePointsOnCone");

	Params::UProjectileBlueprintLibrary_GeneratePointsOnCone_Params Parms{};

	Parms.Origin = Origin;
	Parms.Direction = Direction;
	Parms.SampleCount = SampleCount;
	Parms.SpreadAngle = SpreadAngle;
	Parms.RotateAngle = RotateAngle;
	Parms.OriginOffset = OriginOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.DetachProjectilesFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      BaseActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProjectileBlueprintLibrary::DetachProjectilesFromActor(class AActor* BaseActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "DetachProjectilesFromActor");

	Params::UProjectileBlueprintLibrary_DetachProjectilesFromActor_Params Parms{};

	Parms.BaseActor = BaseActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.CalculateConeVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Fraction                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngleWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngleHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UProjectileBlueprintLibrary::CalculateConeVector(float Fraction, struct FVector& Origin, struct FVector& Direction, float AngleWidth, float AngleHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "CalculateConeVector");

	Params::UProjectileBlueprintLibrary_CalculateConeVector_Params Parms{};

	Parms.Fraction = Fraction;
	Parms.Origin = Origin;
	Parms.Direction = Direction;
	Parms.AngleWidth = AngleWidth;
	Parms.AngleHeight = AngleHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocityAtActor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ResultVelocity                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ResultGravityScale                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartLocation                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPrediction                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AnglePercent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DirectionOffset                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     LocalTargetOffset                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProjectileBlueprintLibrary::CalcThrowVelocityAtActor(struct FVector* ResultVelocity, float* ResultGravityScale, const struct FVector& StartLocation, class AActor* Target, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "CalcThrowVelocityAtActor");

	Params::UProjectileBlueprintLibrary_CalcThrowVelocityAtActor_Params Parms{};

	Parms.StartLocation = StartLocation;
	Parms.Target = Target;
	Parms.MaxPrediction = MaxPrediction;
	Parms.Speed = Speed;
	Parms.AnglePercent = AnglePercent;
	Parms.DirectionOffset = DirectionOffset;
	Parms.LocalTargetOffset = LocalTargetOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResultVelocity != nullptr)
		*ResultVelocity = std::move(Parms.ResultVelocity);

	if (ResultGravityScale != nullptr)
		*ResultGravityScale = Parms.ResultGravityScale;

}


// Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ResultVelocity                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ResultGravityScale                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartLocation                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetVelocity                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPrediction                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AnglePercent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DirectionOffset                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     LocalTargetOffset                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProjectileBlueprintLibrary::CalcThrowVelocity(class UObject* WorldContextObject, struct FVector* ResultVelocity, float* ResultGravityScale, const struct FVector& StartLocation, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjectileBlueprintLibrary", "CalcThrowVelocity");

	Params::UProjectileBlueprintLibrary_CalcThrowVelocity_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StartLocation = StartLocation;
	Parms.TargetLocation = TargetLocation;
	Parms.TargetVelocity = TargetVelocity;
	Parms.MaxPrediction = MaxPrediction;
	Parms.Speed = Speed;
	Parms.AnglePercent = AnglePercent;
	Parms.DirectionOffset = DirectionOffset;
	Parms.LocalTargetOffset = LocalTargetOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResultVelocity != nullptr)
		*ResultVelocity = std::move(Parms.ResultVelocity);

	if (ResultGravityScale != nullptr)
		*ResultGravityScale = Parms.ResultGravityScale;

}


// Class GbxWeapon.ProjectileEQSProxy
// (None)

class UClass* UProjectileEQSProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectileEQSProxy");

	return Clss;
}


// ProjectileEQSProxy GbxWeapon.Default__ProjectileEQSProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UProjectileEQSProxy* UProjectileEQSProxy::GetDefaultObj()
{
	static class UProjectileEQSProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectileEQSProxy*>(UProjectileEQSProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.ProjectileSourceInterface
// (None)

class UClass* IProjectileSourceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectileSourceInterface");

	return Clss;
}


// ProjectileSourceInterface GbxWeapon.Default__ProjectileSourceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IProjectileSourceInterface* IProjectileSourceInterface::GetDefaultObj()
{
	static class IProjectileSourceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IProjectileSourceInterface*>(IProjectileSourceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.RecoilControlComponent
// (None)

class UClass* URecoilControlComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecoilControlComponent");

	return Clss;
}


// RecoilControlComponent GbxWeapon.Default__RecoilControlComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URecoilControlComponent* URecoilControlComponent::GetDefaultObj()
{
	static class URecoilControlComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URecoilControlComponent*>(URecoilControlComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.RecoilControlComponent.ServerApplyInput
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint32                             CompressedInputRot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URecoilControlComponent::ServerApplyInput(uint32 CompressedInputRot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecoilControlComponent", "ServerApplyInput");

	Params::URecoilControlComponent_ServerApplyInput_Params Parms{};

	Parms.CompressedInputRot = CompressedInputRot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.RecoilPatternData
// (None)

class UClass* URecoilPatternData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecoilPatternData");

	return Clss;
}


// RecoilPatternData GbxWeapon.Default__RecoilPatternData
// (Public, ClassDefaultObject, ArchetypeObject)

class URecoilPatternData* URecoilPatternData::GetDefaultObj()
{
	static class URecoilPatternData* Default = nullptr;

	if (!Default)
		Default = static_cast<URecoilPatternData*>(URecoilPatternData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponAccuracyPoolAttributePropertyValueResolver
// (None)

class UClass* UWeaponAccuracyPoolAttributePropertyValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAccuracyPoolAttributePropertyValueResolver");

	return Clss;
}


// WeaponAccuracyPoolAttributePropertyValueResolver GbxWeapon.Default__WeaponAccuracyPoolAttributePropertyValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAccuracyPoolAttributePropertyValueResolver* UWeaponAccuracyPoolAttributePropertyValueResolver::GetDefaultObj()
{
	static class UWeaponAccuracyPoolAttributePropertyValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAccuracyPoolAttributePropertyValueResolver*>(UWeaponAccuracyPoolAttributePropertyValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponSkeletalControlBase
// (None)

class UClass* UWeaponSkeletalControlBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponSkeletalControlBase");

	return Clss;
}


// WeaponSkeletalControlBase GbxWeapon.Default__WeaponSkeletalControlBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponSkeletalControlBase* UWeaponSkeletalControlBase::GetDefaultObj()
{
	static class UWeaponSkeletalControlBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponSkeletalControlBase*>(UWeaponSkeletalControlBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponAmmoChamberBoneControl
// (None)

class UClass* UWeaponAmmoChamberBoneControl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAmmoChamberBoneControl");

	return Clss;
}


// WeaponAmmoChamberBoneControl GbxWeapon.Default__WeaponAmmoChamberBoneControl
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAmmoChamberBoneControl* UWeaponAmmoChamberBoneControl::GetDefaultObj()
{
	static class UWeaponAmmoChamberBoneControl* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAmmoChamberBoneControl*>(UWeaponAmmoChamberBoneControl::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponConsumedLoadedAmmoValueResolver
// (None)

class UClass* UWeaponConsumedLoadedAmmoValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponConsumedLoadedAmmoValueResolver");

	return Clss;
}


// WeaponConsumedLoadedAmmoValueResolver GbxWeapon.Default__WeaponConsumedLoadedAmmoValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponConsumedLoadedAmmoValueResolver* UWeaponConsumedLoadedAmmoValueResolver::GetDefaultObj()
{
	static class UWeaponConsumedLoadedAmmoValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponConsumedLoadedAmmoValueResolver*>(UWeaponConsumedLoadedAmmoValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponAmmoPoolComponent
// (None)

class UClass* UWeaponAmmoPoolComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAmmoPoolComponent");

	return Clss;
}


// WeaponAmmoPoolComponent GbxWeapon.Default__WeaponAmmoPoolComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAmmoPoolComponent* UWeaponAmmoPoolComponent::GetDefaultObj()
{
	static class UWeaponAmmoPoolComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAmmoPoolComponent*>(UWeaponAmmoPoolComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponAmmoPoolComponent.ServerSendAmmoState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UWeaponAmmoPoolComponent::ServerSendAmmoState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAmmoPoolComponent", "ServerSendAmmoState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_SpareAmmo
// (Final, Native, Public)
// Parameters:

void UWeaponAmmoPoolComponent::OnRep_SpareAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAmmoPoolComponent", "OnRep_SpareAmmo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_ServerSyncedLoadedAmmo
// (Final, Native, Protected)
// Parameters:

void UWeaponAmmoPoolComponent::OnRep_ServerSyncedLoadedAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAmmoPoolComponent", "OnRep_ServerSyncedLoadedAmmo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponAmmoPoolComponent.OnMaxLoadedAmmoChanged
// (Final, Native, Protected)
// Parameters:
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponAmmoPoolComponent::OnMaxLoadedAmmoChanged(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAmmoPoolComponent", "OnMaxLoadedAmmoChanged");

	Params::UWeaponAmmoPoolComponent_OnMaxLoadedAmmoChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponAmmoPoolComponent.OnGivenTo
// (Final, Native, Public)
// Parameters:

void UWeaponAmmoPoolComponent::OnGivenTo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAmmoPoolComponent", "OnGivenTo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponAmmoPoolComponent.ClientSetLoadedAmmo
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int32                              NewLoadedAmmo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponAmmoPoolComponent::ClientSetLoadedAmmo(int32 NewLoadedAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAmmoPoolComponent", "ClientSetLoadedAmmo");

	Params::UWeaponAmmoPoolComponent_ClientSetLoadedAmmo_Params Parms{};

	Parms.NewLoadedAmmo = NewLoadedAmmo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponAmmoPoolComponent.ClientConsumeAmmo
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponAmmoPoolComponent::ClientConsumeAmmo(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAmmoPoolComponent", "ClientConsumeAmmo");

	Params::UWeaponAmmoPoolComponent_ClientConsumeAmmo_Params Parms{};

	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponAmmoRegenAttributeValueResolver
// (None)

class UClass* UWeaponAmmoRegenAttributeValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAmmoRegenAttributeValueResolver");

	return Clss;
}


// WeaponAmmoRegenAttributeValueResolver GbxWeapon.Default__WeaponAmmoRegenAttributeValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAmmoRegenAttributeValueResolver* UWeaponAmmoRegenAttributeValueResolver::GetDefaultObj()
{
	static class UWeaponAmmoRegenAttributeValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAmmoRegenAttributeValueResolver*>(UWeaponAmmoRegenAttributeValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponAttachmentSlot
// (None)

class UClass* UWeaponAttachmentSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAttachmentSlot");

	return Clss;
}


// WeaponAttachmentSlot GbxWeapon.Default__WeaponAttachmentSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAttachmentSlot* UWeaponAttachmentSlot::GetDefaultObj()
{
	static class UWeaponAttachmentSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAttachmentSlot*>(UWeaponAttachmentSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponAttachmentSlot.SetMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*              InMesh                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponAttachmentSlot::SetMesh(class UMeshComponent* InMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAttachmentSlot", "SetMesh");

	Params::UWeaponAttachmentSlot_SetMesh_Params Parms{};

	Parms.InMesh = InMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponAttributeContextResolver
// (None)

class UClass* UWeaponAttributeContextResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAttributeContextResolver");

	return Clss;
}


// WeaponAttributeContextResolver GbxWeapon.Default__WeaponAttributeContextResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponAttributeContextResolver* UWeaponAttributeContextResolver::GetDefaultObj()
{
	static class UWeaponAttributeContextResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponAttributeContextResolver*>(UWeaponAttributeContextResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponChargePercentValueResolver
// (None)

class UClass* UWeaponChargePercentValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponChargePercentValueResolver");

	return Clss;
}


// WeaponChargePercentValueResolver GbxWeapon.Default__WeaponChargePercentValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponChargePercentValueResolver* UWeaponChargePercentValueResolver::GetDefaultObj()
{
	static class UWeaponChargePercentValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponChargePercentValueResolver*>(UWeaponChargePercentValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponPreUseComponent
// (None)

class UClass* UWeaponPreUseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponPreUseComponent");

	return Clss;
}


// WeaponPreUseComponent GbxWeapon.Default__WeaponPreUseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponPreUseComponent* UWeaponPreUseComponent::GetDefaultObj()
{
	static class UWeaponPreUseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponPreUseComponent*>(UWeaponPreUseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponPreUseComponent.K2_OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UWeaponPreUseComponent::K2_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPreUseComponent", "K2_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxWeapon.WeaponPreUseComponent.K2_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UWeaponPreUseComponent::K2_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPreUseComponent", "K2_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Class GbxWeapon.WeaponChargeComponent
// (None)

class UClass* UWeaponChargeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponChargeComponent");

	return Clss;
}


// WeaponChargeComponent GbxWeapon.Default__WeaponChargeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponChargeComponent* UWeaponChargeComponent::GetDefaultObj()
{
	static class UWeaponChargeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponChargeComponent*>(UWeaponChargeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponChargeComponent.StopEffects
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UWeaponChargeComponent::StopEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "StopEffects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponChargeComponent.Overcharged
// (Native, Protected)
// Parameters:

void UWeaponChargeComponent::Overcharged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "Overcharged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponChargeComponent.OnRep_ChargeState
// (Final, Native, Protected)
// Parameters:
// enum class EWeaponChargeState      PrevChargeState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponChargeComponent::OnRep_ChargeState(enum class EWeaponChargeState PrevChargeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "OnRep_ChargeState");

	Params::UWeaponChargeComponent_OnRep_ChargeState_Params Parms{};

	Parms.PrevChargeState = PrevChargeState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponChargeComponent.OnChargeActionEnd
// (Final, Native, Protected)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponChargeComponent::OnChargeActionEnd(enum class EGbxActionEndState EndState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "OnChargeActionEnd");

	Params::UWeaponChargeComponent_OnChargeActionEnd_Params Parms{};

	Parms.EndState = EndState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponChargeComponent.GetDischargeDuration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponChargeComponent::GetDischargeDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "GetDischargeDuration");

	Params::UWeaponChargeComponent_GetDischargeDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponChargeComponent.GetChargePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponChargeComponent::GetChargePercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "GetChargePercent");

	Params::UWeaponChargeComponent_GetChargePercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponChargeComponent.GetChargeDuration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponChargeComponent::GetChargeDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "GetChargeDuration");

	Params::UWeaponChargeComponent_GetChargeDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponChargeComponent.FullyDischarged
// (Native, Protected)
// Parameters:

void UWeaponChargeComponent::FullyDischarged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "FullyDischarged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponChargeComponent.FullyCharged
// (Native, Protected)
// Parameters:

void UWeaponChargeComponent::FullyCharged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "FullyCharged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponChargeComponent.DelayChargeFinished
// (Final, Native, Protected)
// Parameters:

void UWeaponChargeComponent::DelayChargeFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponChargeComponent", "DelayChargeFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponClipReloadComponent
// (None)

class UClass* UWeaponClipReloadComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponClipReloadComponent");

	return Clss;
}


// WeaponClipReloadComponent GbxWeapon.Default__WeaponClipReloadComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponClipReloadComponent* UWeaponClipReloadComponent::GetDefaultObj()
{
	static class UWeaponClipReloadComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponClipReloadComponent*>(UWeaponClipReloadComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponClipReloadComponent.OnRep_ClientReloadState
// (Final, Native, Private)
// Parameters:

void UWeaponClipReloadComponent::OnRep_ClientReloadState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponClipReloadComponent", "OnRep_ClientReloadState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.GbxCondition_ZoomState
// (None)

class UClass* UGbxCondition_ZoomState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_ZoomState");

	return Clss;
}


// GbxCondition_ZoomState GbxWeapon.Default__GbxCondition_ZoomState
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_ZoomState* UGbxCondition_ZoomState::GetDefaultObj()
{
	static class UGbxCondition_ZoomState* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_ZoomState*>(UGbxCondition_ZoomState::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.GbxCondition_WeaponType
// (None)

class UClass* UGbxCondition_WeaponType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_WeaponType");

	return Clss;
}


// GbxCondition_WeaponType GbxWeapon.Default__GbxCondition_WeaponType
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_WeaponType* UGbxCondition_WeaponType::GetDefaultObj()
{
	static class UGbxCondition_WeaponType* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_WeaponType*>(UGbxCondition_WeaponType::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponDebugInterface
// (None)

class UClass* IWeaponDebugInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponDebugInterface");

	return Clss;
}


// WeaponDebugInterface GbxWeapon.Default__WeaponDebugInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IWeaponDebugInterface* IWeaponDebugInterface::GetDefaultObj()
{
	static class IWeaponDebugInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IWeaponDebugInterface*>(IWeaponDebugInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponFireBeamComponent
// (None)

class UClass* UWeaponFireBeamComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponFireBeamComponent");

	return Clss;
}


// WeaponFireBeamComponent GbxWeapon.Default__WeaponFireBeamComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponFireBeamComponent* UWeaponFireBeamComponent::GetDefaultObj()
{
	static class UWeaponFireBeamComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponFireBeamComponent*>(UWeaponFireBeamComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponFireBeamComponent.GetShotLightBeamData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULightBeamData>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULightBeamData> UWeaponFireBeamComponent::GetShotLightBeamData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponFireBeamComponent", "GetShotLightBeamData");

	Params::UWeaponFireBeamComponent_GetShotLightBeamData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxWeapon.WeaponFireRateAccelPercentValueResolver
// (None)

class UClass* UWeaponFireRateAccelPercentValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponFireRateAccelPercentValueResolver");

	return Clss;
}


// WeaponFireRateAccelPercentValueResolver GbxWeapon.Default__WeaponFireRateAccelPercentValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponFireRateAccelPercentValueResolver* UWeaponFireRateAccelPercentValueResolver::GetDefaultObj()
{
	static class UWeaponFireRateAccelPercentValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponFireRateAccelPercentValueResolver*>(UWeaponFireRateAccelPercentValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponRecoilComponent
// (None)

class UClass* UWeaponRecoilComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponRecoilComponent");

	return Clss;
}


// WeaponRecoilComponent GbxWeapon.Default__WeaponRecoilComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponRecoilComponent* UWeaponRecoilComponent::GetDefaultObj()
{
	static class UWeaponRecoilComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponRecoilComponent*>(UWeaponRecoilComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponRecoilComponent.OnUsed
// (Native, Protected)
// Parameters:

void UWeaponRecoilComponent::OnUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponRecoilComponent", "OnUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponRecoilComponent.OnDetached
// (Native, Protected)
// Parameters:

void UWeaponRecoilComponent::OnDetached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponRecoilComponent", "OnDetached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponRecoilComponent.OnAttached
// (Native, Protected)
// Parameters:

void UWeaponRecoilComponent::OnAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponRecoilComponent", "OnAttached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponRecoilGoodnessValueResolver
// (None)

class UClass* UWeaponRecoilGoodnessValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponRecoilGoodnessValueResolver");

	return Clss;
}


// WeaponRecoilGoodnessValueResolver GbxWeapon.Default__WeaponRecoilGoodnessValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponRecoilGoodnessValueResolver* UWeaponRecoilGoodnessValueResolver::GetDefaultObj()
{
	static class UWeaponRecoilGoodnessValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponRecoilGoodnessValueResolver*>(UWeaponRecoilGoodnessValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponRecoilPatternComponent
// (None)

class UClass* UWeaponRecoilPatternComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponRecoilPatternComponent");

	return Clss;
}


// WeaponRecoilPatternComponent GbxWeapon.Default__WeaponRecoilPatternComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponRecoilPatternComponent* UWeaponRecoilPatternComponent::GetDefaultObj()
{
	static class UWeaponRecoilPatternComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponRecoilPatternComponent*>(UWeaponRecoilPatternComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponRecoilPatternComponent.ResetPattern
// (Final, Native, Protected)
// Parameters:

void UWeaponRecoilPatternComponent::ResetPattern()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponRecoilPatternComponent", "ResetPattern");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponRecoilPatternComponent.OnUseFinished
// (Final, Native, Protected)
// Parameters:

void UWeaponRecoilPatternComponent::OnUseFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponRecoilPatternComponent", "OnUseFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternWidthGoodness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponRecoilPatternComponent::GetRecoilPatternWidthGoodness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponRecoilPatternComponent", "GetRecoilPatternWidthGoodness");

	Params::UWeaponRecoilPatternComponent_GetRecoilPatternWidthGoodness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternHeightGoodness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponRecoilPatternComponent::GetRecoilPatternHeightGoodness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponRecoilPatternComponent", "GetRecoilPatternHeightGoodness");

	Params::UWeaponRecoilPatternComponent_GetRecoilPatternHeightGoodness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternGoodness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponRecoilPatternComponent::GetRecoilPatternGoodness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponRecoilPatternComponent", "GetRecoilPatternGoodness");

	Params::UWeaponRecoilPatternComponent_GetRecoilPatternGoodness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxWeapon.WeaponSettings
// (None)

class UClass* UWeaponSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponSettings");

	return Clss;
}


// WeaponSettings GbxWeapon.Default__WeaponSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponSettings* UWeaponSettings::GetDefaultObj()
{
	static class UWeaponSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponSettings*>(UWeaponSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponShotModifier
// (None)

class UClass* UWeaponShotModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponShotModifier");

	return Clss;
}


// WeaponShotModifier GbxWeapon.Default__WeaponShotModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponShotModifier* UWeaponShotModifier::GetDefaultObj()
{
	static class UWeaponShotModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponShotModifier*>(UWeaponShotModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponSimpleMotionControlBase
// (None)

class UClass* UWeaponSimpleMotionControlBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponSimpleMotionControlBase");

	return Clss;
}


// WeaponSimpleMotionControlBase GbxWeapon.Default__WeaponSimpleMotionControlBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponSimpleMotionControlBase* UWeaponSimpleMotionControlBase::GetDefaultObj()
{
	static class UWeaponSimpleMotionControlBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponSimpleMotionControlBase*>(UWeaponSimpleMotionControlBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponSimpleMotionBlendControl
// (None)

class UClass* UWeaponSimpleMotionBlendControl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponSimpleMotionBlendControl");

	return Clss;
}


// WeaponSimpleMotionBlendControl GbxWeapon.Default__WeaponSimpleMotionBlendControl
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponSimpleMotionBlendControl* UWeaponSimpleMotionBlendControl::GetDefaultObj()
{
	static class UWeaponSimpleMotionBlendControl* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponSimpleMotionBlendControl*>(UWeaponSimpleMotionBlendControl::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponSimpleMotionBoneControl
// (None)

class UClass* UWeaponSimpleMotionBoneControl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponSimpleMotionBoneControl");

	return Clss;
}


// WeaponSimpleMotionBoneControl GbxWeapon.Default__WeaponSimpleMotionBoneControl
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponSimpleMotionBoneControl* UWeaponSimpleMotionBoneControl::GetDefaultObj()
{
	static class UWeaponSimpleMotionBoneControl* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponSimpleMotionBoneControl*>(UWeaponSimpleMotionBoneControl::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponSingleFeedReloadComponent
// (None)

class UClass* UWeaponSingleFeedReloadComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponSingleFeedReloadComponent");

	return Clss;
}


// WeaponSingleFeedReloadComponent GbxWeapon.Default__WeaponSingleFeedReloadComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponSingleFeedReloadComponent* UWeaponSingleFeedReloadComponent::GetDefaultObj()
{
	static class UWeaponSingleFeedReloadComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponSingleFeedReloadComponent*>(UWeaponSingleFeedReloadComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponSingleFeedReloadComponent.OnUserInput
// (Final, Native, Protected)
// Parameters:
// uint8                              InputChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponSingleFeedReloadComponent::OnUserInput(uint8 InputChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSingleFeedReloadComponent", "OnUserInput");

	Params::UWeaponSingleFeedReloadComponent_OnUserInput_Params Parms{};

	Parms.InputChannel = InputChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponSingleFeedReloadComponent.OnRep_ClientReloadState
// (Final, Native, Private)
// Parameters:

void UWeaponSingleFeedReloadComponent::OnRep_ClientReloadState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSingleFeedReloadComponent", "OnRep_ClientReloadState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponEffectShotStrengthValueResolver
// (None)

class UClass* UWeaponEffectShotStrengthValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponEffectShotStrengthValueResolver");

	return Clss;
}


// WeaponEffectShotStrengthValueResolver GbxWeapon.Default__WeaponEffectShotStrengthValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponEffectShotStrengthValueResolver* UWeaponEffectShotStrengthValueResolver::GetDefaultObj()
{
	static class UWeaponEffectShotStrengthValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponEffectShotStrengthValueResolver*>(UWeaponEffectShotStrengthValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponStatics
// (None)

class UClass* UWeaponStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponStatics");

	return Clss;
}


// WeaponStatics GbxWeapon.Default__WeaponStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponStatics* UWeaponStatics::GetDefaultObj()
{
	static class UWeaponStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponStatics*>(UWeaponStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponStatics.UpdateVisibleAmmo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::UpdateVisibleAmmo(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "UpdateVisibleAmmo");

	Params::UWeaponStatics_UpdateVisibleAmmo_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.UnhideWeapons
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WeaponUser                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::UnhideWeapons(class AActor* WeaponUser, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "UnhideWeapons");

	Params::UWeaponStatics_UnhideWeapons_Params Parms{};

	Parms.WeaponUser = WeaponUser;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.UnhideWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WeaponUser                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::UnhideWeapon(class AActor* WeaponUser, uint8 Slot, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "UnhideWeapon");

	Params::UWeaponStatics_UnhideWeapon_Params Parms{};

	Parms.WeaponUser = WeaponUser;
	Parms.Slot = Slot;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.SetVisibleAmmoUpdateMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWeaponVisibleAmmoUpdateMethodNewUpdateMethod                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::SetVisibleAmmoUpdateMethod(class AWeapon* Weapon, enum class EWeaponVisibleAmmoUpdateMethod NewUpdateMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "SetVisibleAmmoUpdateMethod");

	Params::UWeaponStatics_SetVisibleAmmoUpdateMethod_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.NewUpdateMethod = NewUpdateMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.SetVisibleAmmoState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWeaponVisibleAmmoState NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::SetVisibleAmmoState(class AWeapon* Weapon, enum class EWeaponVisibleAmmoState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "SetVisibleAmmoState");

	Params::UWeaponStatics_SetVisibleAmmoState_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.ResetVisibleAmmoState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::ResetVisibleAmmoState(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "ResetVisibleAmmoState");

	Params::UWeaponStatics_ResetVisibleAmmoState_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.RefillAmmo
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsPercent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::RefillAmmo(class AWeapon* Weapon, int32 Amount, bool bAsPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "RefillAmmo");

	Params::UWeaponStatics_RefillAmmo_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Amount = Amount;
	Parms.bAsPercent = bAsPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldActionEx
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWeaponActionType       WeaponAction                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActionState_Base           ActionParams                                                     (Parm, NativeAccessSpecifierPublic)
// class UGbxAction*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxAction* UWeaponStatics::K2_PlayWeaponHoldActionEx(class AActor* Actor, enum class EWeaponActionType WeaponAction, class AWeapon* Weapon, const struct FActionState_Base& ActionParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "K2_PlayWeaponHoldActionEx");

	Params::UWeaponStatics_K2_PlayWeaponHoldActionEx_Params Parms{};

	Parms.Actor = Actor;
	Parms.WeaponAction = WeaponAction;
	Parms.Weapon = Weapon;
	Parms.ActionParams = ActionParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldAction
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWeaponActionType       WeaponAction                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxAction*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxAction* UWeaponStatics::K2_PlayWeaponHoldAction(class AActor* Actor, enum class EWeaponActionType WeaponAction, class AWeapon* Weapon, float PlayRate, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "K2_PlayWeaponHoldAction");

	Params::UWeaponStatics_K2_PlayWeaponHoldAction_Params Parms{};

	Parms.Actor = Actor;
	Parms.WeaponAction = WeaponAction;
	Parms.Weapon = Weapon;
	Parms.PlayRate = PlayRate;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponStatics.HideWeapons
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WeaponUser                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::HideWeapons(class AActor* WeaponUser, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "HideWeapons");

	Params::UWeaponStatics_HideWeapons_Params Parms{};

	Parms.WeaponUser = WeaponUser;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.HideWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WeaponUser                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::HideWeapon(class AActor* WeaponUser, uint8 Slot, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "HideWeapon");

	Params::UWeaponStatics_HideWeapon_Params Parms{};

	Parms.WeaponUser = WeaponUser;
	Parms.Slot = Slot;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.GiveAmmo
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLoaded                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsPercent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponStatics::GiveAmmo(class AWeapon* Weapon, int32 Amount, bool bLoaded, bool bAsPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "GiveAmmo");

	Params::UWeaponStatics_GiveAmmo_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Amount = Amount;
	Parms.bLoaded = bLoaded;
	Parms.bAsPercent = bAsPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponStatics.GetWeapon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWeapon*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AWeapon* UWeaponStatics::GetWeapon(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "GetWeapon");

	Params::UWeaponStatics_GetWeapon_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponStatics.GetMaxZoomFOVScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UseMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponStatics::GetMaxZoomFOVScale(class AWeapon* Weapon, uint8 UseMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "GetMaxZoomFOVScale");

	Params::UWeaponStatics_GetMaxZoomFOVScale_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.UseMode = UseMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponStatics.GetLoadedAmmo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UseMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWeaponStatics::GetLoadedAmmo(class AWeapon* Weapon, uint8 UseMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "GetLoadedAmmo");

	Params::UWeaponStatics_GetLoadedAmmo_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.UseMode = UseMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponStatics.GetFireRateAccelPercent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UseMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponStatics::GetFireRateAccelPercent(class AWeapon* Weapon, uint8 UseMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "GetFireRateAccelPercent");

	Params::UWeaponStatics_GetFireRateAccelPercent_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.UseMode = UseMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponStatics.GetFireRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UseMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponStatics::GetFireRate(class AWeapon* Weapon, uint8 UseMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "GetFireRate");

	Params::UWeaponStatics_GetFireRate_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.UseMode = UseMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponStatics.GetDamageType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                     Weapon                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              UseMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxDamageType*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxDamageType* UWeaponStatics::GetDamageType(class AWeapon* Weapon, uint8 UseMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "GetDamageType");

	Params::UWeaponStatics_GetDamageType_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.UseMode = UseMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxWeapon.WeaponStatics.CreateProjectileEQSProxy
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      ReferenceActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProjectileEQSProxy*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UProjectileEQSProxy* UWeaponStatics::CreateProjectileEQSProxy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* ReferenceActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponStatics", "CreateProjectileEQSProxy");

	Params::UWeaponStatics_CreateProjectileEQSProxy_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.ReferenceActor = ReferenceActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxWeapon.WeaponTriggerFeedbackAsset
// (None)

class UClass* UWeaponTriggerFeedbackAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponTriggerFeedbackAsset");

	return Clss;
}


// WeaponTriggerFeedbackAsset GbxWeapon.Default__WeaponTriggerFeedbackAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponTriggerFeedbackAsset* UWeaponTriggerFeedbackAsset::GetDefaultObj()
{
	static class UWeaponTriggerFeedbackAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponTriggerFeedbackAsset*>(UWeaponTriggerFeedbackAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponTypeAsset
// (None)

class UClass* UWeaponTypeAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponTypeAsset");

	return Clss;
}


// WeaponTypeAsset GbxWeapon.Default__WeaponTypeAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponTypeAsset* UWeaponTypeAsset::GetDefaultObj()
{
	static class UWeaponTypeAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponTypeAsset*>(UWeaponTypeAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponTypeData
// (None)

class UClass* UWeaponTypeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponTypeData");

	return Clss;
}


// WeaponTypeData GbxWeapon.Default__WeaponTypeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponTypeData* UWeaponTypeData::GetDefaultObj()
{
	static class UWeaponTypeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponTypeData*>(UWeaponTypeData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponTypeDataTableAttributeValueResolver
// (None)

class UClass* UWeaponTypeDataTableAttributeValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponTypeDataTableAttributeValueResolver");

	return Clss;
}


// WeaponTypeDataTableAttributeValueResolver GbxWeapon.Default__WeaponTypeDataTableAttributeValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponTypeDataTableAttributeValueResolver* UWeaponTypeDataTableAttributeValueResolver::GetDefaultObj()
{
	static class UWeaponTypeDataTableAttributeValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponTypeDataTableAttributeValueResolver*>(UWeaponTypeDataTableAttributeValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxWeapon.WeaponVisibleAmmoComponent
// (None)

class UClass* UWeaponVisibleAmmoComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponVisibleAmmoComponent");

	return Clss;
}


// WeaponVisibleAmmoComponent GbxWeapon.Default__WeaponVisibleAmmoComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponVisibleAmmoComponent* UWeaponVisibleAmmoComponent::GetDefaultObj()
{
	static class UWeaponVisibleAmmoComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponVisibleAmmoComponent*>(UWeaponVisibleAmmoComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.UpdateBoneVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponVisibleAmmoComponent::UpdateBoneVisibility(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponVisibleAmmoComponent", "UpdateBoneVisibility");

	Params::UWeaponVisibleAmmoComponent_UpdateBoneVisibility_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoUpdateMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWeaponVisibleAmmoUpdateMethodNewUpdateMethod                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponVisibleAmmoComponent::SetVisibleAmmoUpdateMethod(enum class EWeaponVisibleAmmoUpdateMethod NewUpdateMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponVisibleAmmoComponent", "SetVisibleAmmoUpdateMethod");

	Params::UWeaponVisibleAmmoComponent_SetVisibleAmmoUpdateMethod_Params Parms{};

	Parms.NewUpdateMethod = NewUpdateMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWeaponVisibleAmmoState NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponVisibleAmmoComponent::SetVisibleAmmoState(enum class EWeaponVisibleAmmoState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponVisibleAmmoComponent", "SetVisibleAmmoState");

	Params::UWeaponVisibleAmmoComponent_SetVisibleAmmoState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponVisibleAmmoComponent.ResetVisibleAmmoState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWeaponVisibleAmmoComponent::ResetVisibleAmmoState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponVisibleAmmoComponent", "ResetVisibleAmmoState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponVisibleAmmoComponent.OnRep_ServerAmmoCount
// (Final, Native, Protected)
// Parameters:

void UWeaponVisibleAmmoComponent::OnRep_ServerAmmoCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponVisibleAmmoComponent", "OnRep_ServerAmmoCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponVisibleAmmoComponent.OnDetached
// (Final, Native, Protected)
// Parameters:

void UWeaponVisibleAmmoComponent::OnDetached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponVisibleAmmoComponent", "OnDetached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponVisibleAmmoComponent.OnAttached
// (Final, Native, Protected)
// Parameters:

void UWeaponVisibleAmmoComponent::OnAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponVisibleAmmoComponent", "OnAttached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxWeapon.WeaponVisibleAmmoComponent.OnAmmoChanged
// (Final, Native, Protected)
// Parameters:

void UWeaponVisibleAmmoComponent::OnAmmoChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponVisibleAmmoComponent", "OnAmmoChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxWeapon.WeaponMaxZoomFOVScaleValueResolver
// (None)

class UClass* UWeaponMaxZoomFOVScaleValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMaxZoomFOVScaleValueResolver");

	return Clss;
}


// WeaponMaxZoomFOVScaleValueResolver GbxWeapon.Default__WeaponMaxZoomFOVScaleValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponMaxZoomFOVScaleValueResolver* UWeaponMaxZoomFOVScaleValueResolver::GetDefaultObj()
{
	static class UWeaponMaxZoomFOVScaleValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponMaxZoomFOVScaleValueResolver*>(UWeaponMaxZoomFOVScaleValueResolver::StaticClass()->DefaultObject);

	return Default;
}

}


