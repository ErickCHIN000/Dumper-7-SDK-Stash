#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_SMG_Magic_DarkMagic_Orb.LightProjectile_SMG_Magic_DarkMagic_Orb_C
// (None)

class UClass* ULightProjectile_SMG_Magic_DarkMagic_Orb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_SMG_Magic_DarkMagic_Orb_C");

	return Clss;
}


// LightProjectile_SMG_Magic_DarkMagic_Orb_C LightProjectile_SMG_Magic_DarkMagic_Orb.Default__LightProjectile_SMG_Magic_DarkMagic_Orb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_SMG_Magic_DarkMagic_Orb_C* ULightProjectile_SMG_Magic_DarkMagic_Orb_C::GetDefaultObj()
{
	static class ULightProjectile_SMG_Magic_DarkMagic_Orb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_SMG_Magic_DarkMagic_Orb_C*>(ULightProjectile_SMG_Magic_DarkMagic_Orb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_SMG_Magic_DarkMagic_Orb.LightProjectile_SMG_Magic_DarkMagic_Orb_C.DealAreaDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULightProjectile_SMG_Magic_DarkMagic_Orb_C::DealAreaDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SMG_Magic_DarkMagic_Orb_C", "DealAreaDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightProjectile_SMG_Magic_DarkMagic_Orb.LightProjectile_SMG_Magic_DarkMagic_Orb_C.OnAttached
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttachedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_SMG_Magic_DarkMagic_Orb_C::OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_SMG_Magic_DarkMagic_Orb_C", "OnAttached");

	Params::ULightProjectile_SMG_Magic_DarkMagic_Orb_C_OnAttached_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.AttachedActor = AttachedActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


