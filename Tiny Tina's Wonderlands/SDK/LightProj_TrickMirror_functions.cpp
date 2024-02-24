#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TrickMirror.LightProj_TrickMirror_C
// (None)

class UClass* ULightProj_TrickMirror_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TrickMirror_C");

	return Clss;
}


// LightProj_TrickMirror_C LightProj_TrickMirror.Default__LightProj_TrickMirror_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TrickMirror_C* ULightProj_TrickMirror_C::GetDefaultObj()
{
	static class ULightProj_TrickMirror_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TrickMirror_C*>(ULightProj_TrickMirror_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_TrickMirror.LightProj_TrickMirror_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_TrickMirror_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_TrickMirror_C", "OnLifetimeExpired");

	Params::ULightProj_TrickMirror_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_TrickMirror.LightProj_TrickMirror_C.EnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_TrickMirror_C::EnableHoming(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_TrickMirror_C", "EnableHoming");

	Params::ULightProj_TrickMirror_C_EnableHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


