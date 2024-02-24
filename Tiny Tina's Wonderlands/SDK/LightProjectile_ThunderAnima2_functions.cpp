#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_ThunderAnima2.LightProjectile_ThunderAnima2_C
// (None)

class UClass* ULightProjectile_ThunderAnima2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_ThunderAnima2_C");

	return Clss;
}


// LightProjectile_ThunderAnima2_C LightProjectile_ThunderAnima2.Default__LightProjectile_ThunderAnima2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_ThunderAnima2_C* ULightProjectile_ThunderAnima2_C::GetDefaultObj()
{
	static class ULightProjectile_ThunderAnima2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_ThunderAnima2_C*>(ULightProjectile_ThunderAnima2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_ThunderAnima2.LightProjectile_ThunderAnima2_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_ThunderAnima2_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_ThunderAnima2_C", "OnLifetimeExpired");

	Params::ULightProjectile_ThunderAnima2_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


