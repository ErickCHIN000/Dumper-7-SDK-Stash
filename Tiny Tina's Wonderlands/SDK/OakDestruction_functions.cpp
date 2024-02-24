#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OakDestruction.CryoDestructibleComponent
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent)

class UClass* UCryoDestructibleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CryoDestructibleComponent");

	return Clss;
}


// CryoDestructibleComponent OakDestruction.Default__CryoDestructibleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCryoDestructibleComponent* UCryoDestructibleComponent::GetDefaultObj()
{
	static class UCryoDestructibleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCryoDestructibleComponent*>(UCryoDestructibleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OakDestruction.OakDestructibleFXManager
// (Actor)

class UClass* AOakDestructibleFXManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OakDestructibleFXManager");

	return Clss;
}


// OakDestructibleFXManager OakDestruction.Default__OakDestructibleFXManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AOakDestructibleFXManager* AOakDestructibleFXManager::GetDefaultObj()
{
	static class AOakDestructibleFXManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AOakDestructibleFXManager*>(AOakDestructibleFXManager::StaticClass()->DefaultObject);

	return Default;
}


// Function OakDestruction.OakDestructibleFXManager.OnDestructibleDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AOakDestructibleFXManager::OnDestructibleDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakDestructibleFXManager", "OnDestructibleDestroyed");

	Params::AOakDestructibleFXManager_OnDestructibleDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OakDestruction.OakDestructibleFXManager.DestroyAllDestructibles
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void AOakDestructibleFXManager::DestroyAllDestructibles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakDestructibleFXManager", "DestroyAllDestructibles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OakDestruction.OakDestructibleFXManager.ClientApplyRadiusDamage
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// uint32                             SyncID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageAmount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HurtOrigin                                                       (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ImpulseStrength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFullDamage                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AOakDestructibleFXManager::ClientApplyRadiusDamage(uint32 SyncID, float DamageAmount, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakDestructibleFXManager", "ClientApplyRadiusDamage");

	Params::AOakDestructibleFXManager_ClientApplyRadiusDamage_Params Parms{};

	Parms.SyncID = SyncID;
	Parms.DamageAmount = DamageAmount;
	Parms.HurtOrigin = HurtOrigin;
	Parms.DamageRadius = DamageRadius;
	Parms.ImpulseStrength = ImpulseStrength;
	Parms.bFullDamage = bFullDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OakDestruction.OakDestructibleFXManager.ClientApplyDamage
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// uint32                             SyncID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageAmount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ImpulseDir                                                       (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ImpulseStrength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AOakDestructibleFXManager::ClientApplyDamage(uint32 SyncID, float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakDestructibleFXManager", "ClientApplyDamage");

	Params::AOakDestructibleFXManager_ClientApplyDamage_Params Parms{};

	Parms.SyncID = SyncID;
	Parms.DamageAmount = DamageAmount;
	Parms.HitLocation = HitLocation;
	Parms.ImpulseDir = ImpulseDir;
	Parms.ImpulseStrength = ImpulseStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


