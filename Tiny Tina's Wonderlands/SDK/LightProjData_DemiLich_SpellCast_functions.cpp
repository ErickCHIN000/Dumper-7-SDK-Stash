#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjData_DemiLich_SpellCast.LightProjData_DemiLich_SpellCast_C
// (None)

class UClass* ULightProjData_DemiLich_SpellCast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjData_DemiLich_SpellCast_C");

	return Clss;
}


// LightProjData_DemiLich_SpellCast_C LightProjData_DemiLich_SpellCast.Default__LightProjData_DemiLich_SpellCast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjData_DemiLich_SpellCast_C* ULightProjData_DemiLich_SpellCast_C::GetDefaultObj()
{
	static class ULightProjData_DemiLich_SpellCast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjData_DemiLich_SpellCast_C*>(ULightProjData_DemiLich_SpellCast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjData_DemiLich_SpellCast.LightProjData_DemiLich_SpellCast_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjData_DemiLich_SpellCast_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_DemiLich_SpellCast_C", "OnLifetimeExpired");

	Params::ULightProjData_DemiLich_SpellCast_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjData_DemiLich_SpellCast.LightProjData_DemiLich_SpellCast_C.EnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjData_DemiLich_SpellCast_C::EnableHoming(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_DemiLich_SpellCast_C", "EnableHoming");

	Params::ULightProjData_DemiLich_SpellCast_C_EnableHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


