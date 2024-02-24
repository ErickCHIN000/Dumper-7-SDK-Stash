#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_MineHail_MIRV.LightProj_MineHail_MIRV_C
// (None)

class UClass* ULightProj_MineHail_MIRV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_MineHail_MIRV_C");

	return Clss;
}


// LightProj_MineHail_MIRV_C LightProj_MineHail_MIRV.Default__LightProj_MineHail_MIRV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_MineHail_MIRV_C* ULightProj_MineHail_MIRV_C::GetDefaultObj()
{
	static class ULightProj_MineHail_MIRV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_MineHail_MIRV_C*>(ULightProj_MineHail_MIRV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_MineHail_MIRV.LightProj_MineHail_MIRV_C.OnExplode
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_MineHail_MIRV_C::OnExplode(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_MineHail_MIRV_C", "OnExplode");

	Params::ULightProj_MineHail_MIRV_C_OnExplode_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_MineHail_MIRV.LightProj_MineHail_MIRV_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_MineHail_MIRV_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_MineHail_MIRV_C", "OnLifetimeExpired");

	Params::ULightProj_MineHail_MIRV_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


