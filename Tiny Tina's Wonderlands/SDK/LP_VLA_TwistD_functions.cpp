#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LP_VLA_TwistD.LP_VLA_TwistD_C
// (None)

class UClass* ULP_VLA_TwistD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LP_VLA_TwistD_C");

	return Clss;
}


// LP_VLA_TwistD_C LP_VLA_TwistD.Default__LP_VLA_TwistD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULP_VLA_TwistD_C* ULP_VLA_TwistD_C::GetDefaultObj()
{
	static class ULP_VLA_TwistD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULP_VLA_TwistD_C*>(ULP_VLA_TwistD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LP_VLA_TwistD.LP_VLA_TwistD_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULP_VLA_TwistD_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LP_VLA_TwistD_C", "OnLifetimeExpired");

	Params::ULP_VLA_TwistD_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


