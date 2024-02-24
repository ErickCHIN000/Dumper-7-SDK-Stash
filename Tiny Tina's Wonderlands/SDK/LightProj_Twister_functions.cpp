#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Twister.LightProj_Twister_C
// (None)

class UClass* ULightProj_Twister_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Twister_C");

	return Clss;
}


// LightProj_Twister_C LightProj_Twister.Default__LightProj_Twister_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Twister_C* ULightProj_Twister_C::GetDefaultObj()
{
	static class ULightProj_Twister_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Twister_C*>(ULightProj_Twister_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Twister.LightProj_Twister_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Twister_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Twister_C", "OnLifetimeExpired");

	Params::ULightProj_Twister_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


