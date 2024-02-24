#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_COV_PS_MagicBolt.LightProj_COV_PS_MagicBolt_C
// (None)

class UClass* ULightProj_COV_PS_MagicBolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_COV_PS_MagicBolt_C");

	return Clss;
}


// LightProj_COV_PS_MagicBolt_C LightProj_COV_PS_MagicBolt.Default__LightProj_COV_PS_MagicBolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_COV_PS_MagicBolt_C* ULightProj_COV_PS_MagicBolt_C::GetDefaultObj()
{
	static class ULightProj_COV_PS_MagicBolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_COV_PS_MagicBolt_C*>(ULightProj_COV_PS_MagicBolt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_COV_PS_MagicBolt.LightProj_COV_PS_MagicBolt_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_COV_PS_MagicBolt_C::OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_COV_PS_MagicBolt_C", "OnBegin");

	Params::ULightProj_COV_PS_MagicBolt_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_COV_PS_MagicBolt.LightProj_COV_PS_MagicBolt_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_COV_PS_MagicBolt_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_COV_PS_MagicBolt_C", "OnLifetimeExpired");

	Params::ULightProj_COV_PS_MagicBolt_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_COV_PS_MagicBolt.LightProj_COV_PS_MagicBolt_C.EnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_COV_PS_MagicBolt_C::EnableHoming(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_COV_PS_MagicBolt_C", "EnableHoming");

	Params::ULightProj_COV_PS_MagicBolt_C_EnableHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


