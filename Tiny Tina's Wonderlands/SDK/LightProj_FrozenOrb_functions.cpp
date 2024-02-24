#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_FrozenOrb.LightProj_FrozenOrb_C
// (None)

class UClass* ULightProj_FrozenOrb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_FrozenOrb_C");

	return Clss;
}


// LightProj_FrozenOrb_C LightProj_FrozenOrb.Default__LightProj_FrozenOrb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_FrozenOrb_C* ULightProj_FrozenOrb_C::GetDefaultObj()
{
	static class ULightProj_FrozenOrb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_FrozenOrb_C*>(ULightProj_FrozenOrb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_FrozenOrb.LightProj_FrozenOrb_C.OnExplode
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_FrozenOrb_C::OnExplode(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_FrozenOrb_C", "OnExplode");

	Params::ULightProj_FrozenOrb_C_OnExplode_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_FrozenOrb.LightProj_FrozenOrb_C.OnDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               bCritical                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayExplosion_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_FrozenOrb_C::OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, class AActor* CallFunc_GetSource_ReturnValue, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_FrozenOrb_C", "OnDamage");

	Params::ULightProj_FrozenOrb_C_OnDamage_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Hit = Hit;
	Parms.bCritical = bCritical;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.CallFunc_PlayExplosion_ReturnValue = CallFunc_PlayExplosion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


