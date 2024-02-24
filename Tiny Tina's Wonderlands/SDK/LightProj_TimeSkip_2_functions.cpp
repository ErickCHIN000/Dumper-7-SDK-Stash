#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TimeSkip_2.LightProj_TimeSkip_2_C
// (None)

class UClass* ULightProj_TimeSkip_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TimeSkip_2_C");

	return Clss;
}


// LightProj_TimeSkip_2_C LightProj_TimeSkip_2.Default__LightProj_TimeSkip_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TimeSkip_2_C* ULightProj_TimeSkip_2_C::GetDefaultObj()
{
	static class ULightProj_TimeSkip_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TimeSkip_2_C*>(ULightProj_TimeSkip_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_TimeSkip_2.LightProj_TimeSkip_2_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_TimeSkip_2_C::OnBegin(class ULightProjectile* Projectile, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_TimeSkip_2_C", "OnBegin");

	Params::ULightProj_TimeSkip_2_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_TimeSkip_2.LightProj_TimeSkip_2_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_TimeSkip_2_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_TimeSkip_2_C", "OnLifetimeExpired");

	Params::ULightProj_TimeSkip_2_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


