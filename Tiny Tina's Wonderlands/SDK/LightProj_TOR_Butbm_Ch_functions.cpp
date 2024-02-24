#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TOR_Butbm_Ch.LightProj_TOR_Butbm_Ch_C
// (None)

class UClass* ULightProj_TOR_Butbm_Ch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TOR_Butbm_Ch_C");

	return Clss;
}


// LightProj_TOR_Butbm_Ch_C LightProj_TOR_Butbm_Ch.Default__LightProj_TOR_Butbm_Ch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TOR_Butbm_Ch_C* ULightProj_TOR_Butbm_Ch_C::GetDefaultObj()
{
	static class ULightProj_TOR_Butbm_Ch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TOR_Butbm_Ch_C*>(ULightProj_TOR_Butbm_Ch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_TOR_Butbm_Ch.LightProj_TOR_Butbm_Ch_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_TOR_Butbm_Ch_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_TOR_Butbm_Ch_C", "OnLifetimeExpired");

	Params::ULightProj_TOR_Butbm_Ch_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


