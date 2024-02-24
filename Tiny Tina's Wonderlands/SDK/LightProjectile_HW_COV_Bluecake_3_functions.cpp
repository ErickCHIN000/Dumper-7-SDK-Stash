#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HW_COV_Bluecake_3.LightProjectile_HW_COV_Bluecake_3_C
// (None)

class UClass* ULightProjectile_HW_COV_Bluecake_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HW_COV_Bluecake_3_C");

	return Clss;
}


// LightProjectile_HW_COV_Bluecake_3_C LightProjectile_HW_COV_Bluecake_3.Default__LightProjectile_HW_COV_Bluecake_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HW_COV_Bluecake_3_C* ULightProjectile_HW_COV_Bluecake_3_C::GetDefaultObj()
{
	static class ULightProjectile_HW_COV_Bluecake_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HW_COV_Bluecake_3_C*>(ULightProjectile_HW_COV_Bluecake_3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_HW_COV_Bluecake_3.LightProjectile_HW_COV_Bluecake_3_C.BlueCakeBehavior
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitActorSource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProjectile_HW_COV_Bluecake_3_C::BlueCakeBehavior(class ULightProjectile* Projectile, class AActor* Source, bool HitActorSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HW_COV_Bluecake_3_C", "BlueCakeBehavior");

	Params::ULightProjectile_HW_COV_Bluecake_3_C_BlueCakeBehavior_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Source = Source;
	Parms.HitActorSource = HitActorSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_HW_COV_Bluecake_3.LightProjectile_HW_COV_Bluecake_3_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_HW_COV_Bluecake_3_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_HW_COV_Bluecake_3_C", "OnLifetimeExpired");

	Params::ULightProjectile_HW_COV_Bluecake_3_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


