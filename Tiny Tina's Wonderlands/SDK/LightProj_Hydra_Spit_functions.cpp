#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Hydra_Spit.LightProj_Hydra_Spit_C
// (None)

class UClass* ULightProj_Hydra_Spit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Hydra_Spit_C");

	return Clss;
}


// LightProj_Hydra_Spit_C LightProj_Hydra_Spit.Default__LightProj_Hydra_Spit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Hydra_Spit_C* ULightProj_Hydra_Spit_C::GetDefaultObj()
{
	static class ULightProj_Hydra_Spit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Hydra_Spit_C*>(ULightProj_Hydra_Spit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Hydra_Spit.LightProj_Hydra_Spit_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Hydra_Spit_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Hydra_Spit_C", "OnLifetimeExpired");

	Params::ULightProj_Hydra_Spit_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


