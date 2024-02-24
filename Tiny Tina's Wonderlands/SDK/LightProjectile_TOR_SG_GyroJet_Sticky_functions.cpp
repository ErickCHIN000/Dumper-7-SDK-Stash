#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_TOR_SG_GyroJet_Sticky.LightProjectile_TOR_SG_GyroJet_Sticky_C
// (None)

class UClass* ULightProjectile_TOR_SG_GyroJet_Sticky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_TOR_SG_GyroJet_Sticky_C");

	return Clss;
}


// LightProjectile_TOR_SG_GyroJet_Sticky_C LightProjectile_TOR_SG_GyroJet_Sticky.Default__LightProjectile_TOR_SG_GyroJet_Sticky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_TOR_SG_GyroJet_Sticky_C* ULightProjectile_TOR_SG_GyroJet_Sticky_C::GetDefaultObj()
{
	static class ULightProjectile_TOR_SG_GyroJet_Sticky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_TOR_SG_GyroJet_Sticky_C*>(ULightProjectile_TOR_SG_GyroJet_Sticky_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_TOR_SG_GyroJet_Sticky.LightProjectile_TOR_SG_GyroJet_Sticky_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_TOR_SG_GyroJet_Sticky_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_TOR_SG_GyroJet_Sticky_C", "OnLifetimeExpired");

	Params::ULightProjectile_TOR_SG_GyroJet_Sticky_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


