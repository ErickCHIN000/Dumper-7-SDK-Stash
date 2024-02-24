#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_KotC24.LightProjectile_KotC24_C
// (None)

class UClass* ULightProjectile_KotC24_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_KotC24_C");

	return Clss;
}


// LightProjectile_KotC24_C LightProjectile_KotC24.Default__LightProjectile_KotC24_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_KotC24_C* ULightProjectile_KotC24_C::GetDefaultObj()
{
	static class ULightProjectile_KotC24_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_KotC24_C*>(ULightProjectile_KotC24_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_KotC24.LightProjectile_KotC24_C.StartHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_KotC24_C::StartHoming(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_KotC24_C", "StartHoming");

	Params::ULightProjectile_KotC24_C_StartHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


