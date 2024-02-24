#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_SM_LavaGoodTime_Child.LightProjectile_SM_LavaGoodTime_Child_C
// (None)

class UClass* ULightProjectile_SM_LavaGoodTime_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_SM_LavaGoodTime_Child_C");

	return Clss;
}


// LightProjectile_SM_LavaGoodTime_Child_C LightProjectile_SM_LavaGoodTime_Child.Default__LightProjectile_SM_LavaGoodTime_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_SM_LavaGoodTime_Child_C* ULightProjectile_SM_LavaGoodTime_Child_C::GetDefaultObj()
{
	static class ULightProjectile_SM_LavaGoodTime_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_SM_LavaGoodTime_Child_C*>(ULightProjectile_SM_LavaGoodTime_Child_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_SM_LavaGoodTime_Child.LightProjectile_SM_LavaGoodTime_Child_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_SM_LavaGoodTime_Child_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SM_LavaGoodTime_Child_C", "OnLifetimeExpired");

	Params::ULightProjectile_SM_LavaGoodTime_Child_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_SM_LavaGoodTime_Child.LightProjectile_SM_LavaGoodTime_Child_C.OnAttached
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttachedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_SM_LavaGoodTime_Child_C::OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SM_LavaGoodTime_Child_C", "OnAttached");

	Params::ULightProjectile_SM_LavaGoodTime_Child_C_OnAttached_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.AttachedActor = AttachedActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


