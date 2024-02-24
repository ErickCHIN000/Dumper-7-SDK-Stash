#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Crossbow_Apex_Homing.LightProjectile_Crossbow_Apex_Homing_C
// (None)

class UClass* ULightProjectile_Crossbow_Apex_Homing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Crossbow_Apex_Homing_C");

	return Clss;
}


// LightProjectile_Crossbow_Apex_Homing_C LightProjectile_Crossbow_Apex_Homing.Default__LightProjectile_Crossbow_Apex_Homing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Crossbow_Apex_Homing_C* ULightProjectile_Crossbow_Apex_Homing_C::GetDefaultObj()
{
	static class ULightProjectile_Crossbow_Apex_Homing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Crossbow_Apex_Homing_C*>(ULightProjectile_Crossbow_Apex_Homing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_Crossbow_Apex_Homing.LightProjectile_Crossbow_Apex_Homing_C.StartHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*         Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_Crossbow_Apex_Homing_C::StartHoming(class UOakLightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_Crossbow_Apex_Homing_C", "StartHoming");

	Params::ULightProjectile_Crossbow_Apex_Homing_C_StartHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


