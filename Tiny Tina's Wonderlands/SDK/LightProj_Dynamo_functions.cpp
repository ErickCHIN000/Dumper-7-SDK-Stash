#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Dynamo.LightProj_Dynamo_C
// (None)

class UClass* ULightProj_Dynamo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Dynamo_C");

	return Clss;
}


// LightProj_Dynamo_C LightProj_Dynamo.Default__LightProj_Dynamo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Dynamo_C* ULightProj_Dynamo_C::GetDefaultObj()
{
	static class ULightProj_Dynamo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Dynamo_C*>(ULightProj_Dynamo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_Dynamo.LightProj_Dynamo_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProj_Dynamo_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_Dynamo_C", "OnLifetimeExpired");

	Params::ULightProj_Dynamo_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


