#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjData_IceSpike_Base.LightProjData_IceSpike_Base_C
// (None)

class UClass* ULightProjData_IceSpike_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjData_IceSpike_Base_C");

	return Clss;
}


// LightProjData_IceSpike_Base_C LightProjData_IceSpike_Base.Default__LightProjData_IceSpike_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjData_IceSpike_Base_C* ULightProjData_IceSpike_Base_C::GetDefaultObj()
{
	static class ULightProjData_IceSpike_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjData_IceSpike_Base_C*>(ULightProjData_IceSpike_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjData_IceSpike_Base.LightProjData_IceSpike_Base_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjData_IceSpike_Base_C::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_IceSpike_Base_C", "OnLifetimeExpired");

	Params::ULightProjData_IceSpike_Base_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


