#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_TOR_GyroJet_Master.LightProjectile_TOR_GyroJet_Master_C
// (None)

class UClass* ULightProjectile_TOR_GyroJet_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_TOR_GyroJet_Master_C");

	return Clss;
}


// LightProjectile_TOR_GyroJet_Master_C LightProjectile_TOR_GyroJet_Master.Default__LightProjectile_TOR_GyroJet_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_TOR_GyroJet_Master_C* ULightProjectile_TOR_GyroJet_Master_C::GetDefaultObj()
{
	static class ULightProjectile_TOR_GyroJet_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_TOR_GyroJet_Master_C*>(ULightProjectile_TOR_GyroJet_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_TOR_GyroJet_Master.LightProjectile_TOR_GyroJet_Master_C.StickyLifetimeExpired
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileQueryData   K2Node_MakeStruct_LightProjectileQueryData                       (NoDestructor)

void ULightProjectile_TOR_GyroJet_Master_C::StickyLifetimeExpired(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_TOR_GyroJet_Master_C", "StickyLifetimeExpired");

	Params::ULightProjectile_TOR_GyroJet_Master_C_StickyLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.K2Node_MakeStruct_LightProjectileQueryData = K2Node_MakeStruct_LightProjectileQueryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjectile_TOR_GyroJet_Master.LightProjectile_TOR_GyroJet_Master_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_TOR_GyroJet_Master_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_TOR_GyroJet_Master_C", "OnLifetimeExpired");

	Params::ULightProjectile_TOR_GyroJet_Master_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


