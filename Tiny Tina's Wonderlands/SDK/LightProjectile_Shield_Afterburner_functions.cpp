#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Shield_Afterburner.LightProjectile_Shield_Afterburner_C
// (None)

class UClass* ULightProjectile_Shield_Afterburner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Shield_Afterburner_C");

	return Clss;
}


// LightProjectile_Shield_Afterburner_C LightProjectile_Shield_Afterburner.Default__LightProjectile_Shield_Afterburner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Shield_Afterburner_C* ULightProjectile_Shield_Afterburner_C::GetDefaultObj()
{
	static class ULightProjectile_Shield_Afterburner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Shield_Afterburner_C*>(ULightProjectile_Shield_Afterburner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_Shield_Afterburner.LightProjectile_Shield_Afterburner_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_Shield_Afterburner_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_Shield_Afterburner_C", "OnLifetimeExpired");

	Params::ULightProjectile_Shield_Afterburner_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


