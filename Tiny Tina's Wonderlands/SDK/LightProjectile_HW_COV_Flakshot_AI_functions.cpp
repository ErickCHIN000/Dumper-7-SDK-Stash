#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HW_COV_Flakshot_AI.LightProjectile_HW_COV_Flakshot_AI_C
// (None)

class UClass* ULightProjectile_HW_COV_Flakshot_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HW_COV_Flakshot_AI_C");

	return Clss;
}


// LightProjectile_HW_COV_Flakshot_AI_C LightProjectile_HW_COV_Flakshot_AI.Default__LightProjectile_HW_COV_Flakshot_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HW_COV_Flakshot_AI_C* ULightProjectile_HW_COV_Flakshot_AI_C::GetDefaultObj()
{
	static class ULightProjectile_HW_COV_Flakshot_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HW_COV_Flakshot_AI_C*>(ULightProjectile_HW_COV_Flakshot_AI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_HW_COV_Flakshot_AI.LightProjectile_HW_COV_Flakshot_AI_C.OnExplode
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_StaticGetParticleEffect_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_HW_COV_Flakshot_AI_C::OnExplode(class ULightProjectile* Projectile, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HW_COV_Flakshot_AI_C", "OnExplode");

	Params::ULightProjectile_HW_COV_Flakshot_AI_C_OnExplode_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_StaticGetParticleEffect_ReturnValue = CallFunc_StaticGetParticleEffect_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_HW_COV_Flakshot_AI.LightProjectile_HW_COV_Flakshot_AI_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_HW_COV_Flakshot_AI_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HW_COV_Flakshot_AI_C", "OnLifetimeExpired");

	Params::ULightProjectile_HW_COV_Flakshot_AI_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


