#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjData_MagicMissile_Ricochet.LightProjData_MagicMissile_Ricochet_C
// (None)

class UClass* ULightProjData_MagicMissile_Ricochet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjData_MagicMissile_Ricochet_C");

	return Clss;
}


// LightProjData_MagicMissile_Ricochet_C LightProjData_MagicMissile_Ricochet.Default__LightProjData_MagicMissile_Ricochet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjData_MagicMissile_Ricochet_C* ULightProjData_MagicMissile_Ricochet_C::GetDefaultObj()
{
	static class ULightProjData_MagicMissile_Ricochet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjData_MagicMissile_Ricochet_C*>(ULightProjData_MagicMissile_Ricochet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjData_MagicMissile_Ricochet.LightProjData_MagicMissile_Ricochet_C.EnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjData_MagicMissile_Ricochet_C::EnableHoming(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_MagicMissile_Ricochet_C", "EnableHoming");

	Params::ULightProjData_MagicMissile_Ricochet_C_EnableHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjData_MagicMissile_Ricochet.LightProjData_MagicMissile_Ricochet_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjData_MagicMissile_Ricochet_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_MagicMissile_Ricochet_C", "OnLifetimeExpired");

	Params::ULightProjData_MagicMissile_Ricochet_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


