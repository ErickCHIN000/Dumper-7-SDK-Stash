#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_ReignOfArrows_Child.LightProjectile_ReignOfArrows_Child_C
// (None)

class UClass* ULightProjectile_ReignOfArrows_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_ReignOfArrows_Child_C");

	return Clss;
}


// LightProjectile_ReignOfArrows_Child_C LightProjectile_ReignOfArrows_Child.Default__LightProjectile_ReignOfArrows_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_ReignOfArrows_Child_C* ULightProjectile_ReignOfArrows_Child_C::GetDefaultObj()
{
	static class ULightProjectile_ReignOfArrows_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_ReignOfArrows_Child_C*>(ULightProjectile_ReignOfArrows_Child_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_ReignOfArrows_Child.LightProjectile_ReignOfArrows_Child_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_ReignOfArrows_Child_C::OnBegin(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_ReignOfArrows_Child_C", "OnBegin");

	Params::ULightProjectile_ReignOfArrows_Child_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_ReignOfArrows_Child.LightProjectile_ReignOfArrows_Child_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_ReignOfArrows_Child_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_ReignOfArrows_Child_C", "OnLifetimeExpired");

	Params::ULightProjectile_ReignOfArrows_Child_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


