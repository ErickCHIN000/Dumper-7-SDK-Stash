#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Laserhand_1.LightProj_Laserhand_1_C
// (None)

class UClass* ULightProj_Laserhand_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Laserhand_1_C");

	return Clss;
}


// LightProj_Laserhand_1_C LightProj_Laserhand_1.Default__LightProj_Laserhand_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Laserhand_1_C* ULightProj_Laserhand_1_C::GetDefaultObj()
{
	static class ULightProj_Laserhand_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Laserhand_1_C*>(ULightProj_Laserhand_1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Laserhand_1.LightProj_Laserhand_1_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Laserhand_1_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Laserhand_1_C", "OnLifetimeExpired");

	Params::ULightProj_Laserhand_1_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


