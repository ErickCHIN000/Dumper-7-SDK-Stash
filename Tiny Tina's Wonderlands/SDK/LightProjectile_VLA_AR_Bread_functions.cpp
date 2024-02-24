#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_VLA_AR_Bread.LightProjectile_VLA_AR_Bread_C
// (None)

class UClass* ULightProjectile_VLA_AR_Bread_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_VLA_AR_Bread_C");

	return Clss;
}


// LightProjectile_VLA_AR_Bread_C LightProjectile_VLA_AR_Bread.Default__LightProjectile_VLA_AR_Bread_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_VLA_AR_Bread_C* ULightProjectile_VLA_AR_Bread_C::GetDefaultObj()
{
	static class ULightProjectile_VLA_AR_Bread_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_VLA_AR_Bread_C*>(ULightProjectile_VLA_AR_Bread_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_VLA_AR_Bread.LightProjectile_VLA_AR_Bread_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_VLA_AR_Bread_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_VLA_AR_Bread_C", "OnLifetimeExpired");

	Params::ULightProjectile_VLA_AR_Bread_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


