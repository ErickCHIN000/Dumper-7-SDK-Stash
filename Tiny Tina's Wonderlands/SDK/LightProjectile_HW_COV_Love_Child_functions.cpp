#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HW_COV_Love_Child.LightProjectile_HW_COV_Love_Child_C
// (None)

class UClass* ULightProjectile_HW_COV_Love_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HW_COV_Love_Child_C");

	return Clss;
}


// LightProjectile_HW_COV_Love_Child_C LightProjectile_HW_COV_Love_Child.Default__LightProjectile_HW_COV_Love_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HW_COV_Love_Child_C* ULightProjectile_HW_COV_Love_Child_C::GetDefaultObj()
{
	static class ULightProjectile_HW_COV_Love_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HW_COV_Love_Child_C*>(ULightProjectile_HW_COV_Love_Child_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_HW_COV_Love_Child.LightProjectile_HW_COV_Love_Child_C.OnExplode
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)

void ULightProjectile_HW_COV_Love_Child_C::OnExplode(class ULightProjectile* Projectile, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HW_COV_Love_Child_C", "OnExplode");

	Params::ULightProjectile_HW_COV_Love_Child_C_OnExplode_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_HW_COV_Love_Child.LightProjectile_HW_COV_Love_Child_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_HW_COV_Love_Child_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HW_COV_Love_Child_C", "OnLifetimeExpired");

	Params::ULightProjectile_HW_COV_Love_Child_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


