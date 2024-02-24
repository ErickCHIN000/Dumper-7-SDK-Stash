#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_COV_PS_MagicBolt_Pirates.LightProj_COV_PS_MagicBolt_Pirates_C
// (None)

class UClass* ULightProj_COV_PS_MagicBolt_Pirates_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_COV_PS_MagicBolt_Pirates_C");

	return Clss;
}


// LightProj_COV_PS_MagicBolt_Pirates_C LightProj_COV_PS_MagicBolt_Pirates.Default__LightProj_COV_PS_MagicBolt_Pirates_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_COV_PS_MagicBolt_Pirates_C* ULightProj_COV_PS_MagicBolt_Pirates_C::GetDefaultObj()
{
	static class ULightProj_COV_PS_MagicBolt_Pirates_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_COV_PS_MagicBolt_Pirates_C*>(ULightProj_COV_PS_MagicBolt_Pirates_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_COV_PS_MagicBolt_Pirates.LightProj_COV_PS_MagicBolt_Pirates_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_COV_PS_MagicBolt_Pirates_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_COV_PS_MagicBolt_Pirates_C", "OnLifetimeExpired");

	Params::ULightProj_COV_PS_MagicBolt_Pirates_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


