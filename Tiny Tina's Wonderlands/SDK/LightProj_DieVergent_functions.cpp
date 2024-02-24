#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_DieVergent.LightProj_DieVergent_C
// (None)

class UClass* ULightProj_DieVergent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_DieVergent_C");

	return Clss;
}


// LightProj_DieVergent_C LightProj_DieVergent.Default__LightProj_DieVergent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_DieVergent_C* ULightProj_DieVergent_C::GetDefaultObj()
{
	static class ULightProj_DieVergent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_DieVergent_C*>(ULightProj_DieVergent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_DieVergent.LightProj_DieVergent_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_DieVergent_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_DieVergent_C", "OnLifetimeExpired");

	Params::ULightProj_DieVergent_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


