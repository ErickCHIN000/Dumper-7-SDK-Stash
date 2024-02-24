#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_HammerQuake_ProxMine.LightProj_HammerQuake_ProxMine_C
// (None)

class UClass* ULightProj_HammerQuake_ProxMine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_HammerQuake_ProxMine_C");

	return Clss;
}


// LightProj_HammerQuake_ProxMine_C LightProj_HammerQuake_ProxMine.Default__LightProj_HammerQuake_ProxMine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_HammerQuake_ProxMine_C* ULightProj_HammerQuake_ProxMine_C::GetDefaultObj()
{
	static class ULightProj_HammerQuake_ProxMine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_HammerQuake_ProxMine_C*>(ULightProj_HammerQuake_ProxMine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_HammerQuake_ProxMine.LightProj_HammerQuake_ProxMine_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_HammerQuake_ProxMine_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_HammerQuake_ProxMine_C", "OnLifetimeExpired");

	Params::ULightProj_HammerQuake_ProxMine_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


