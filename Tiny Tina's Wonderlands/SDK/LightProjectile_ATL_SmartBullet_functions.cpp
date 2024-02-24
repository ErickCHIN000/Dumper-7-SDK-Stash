#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_ATL_SmartBullet.LightProjectile_ATL_SmartBullet_C
// (None)

class UClass* ULightProjectile_ATL_SmartBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_ATL_SmartBullet_C");

	return Clss;
}


// LightProjectile_ATL_SmartBullet_C LightProjectile_ATL_SmartBullet.Default__LightProjectile_ATL_SmartBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_ATL_SmartBullet_C* ULightProjectile_ATL_SmartBullet_C::GetDefaultObj()
{
	static class ULightProjectile_ATL_SmartBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_ATL_SmartBullet_C*>(ULightProjectile_ATL_SmartBullet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_ATL_SmartBullet.LightProjectile_ATL_SmartBullet_C.HomeTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*         Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_ATL_SmartBullet_C::HomeTo(class UOakLightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_ATL_SmartBullet_C", "HomeTo");

	Params::ULightProjectile_ATL_SmartBullet_C_HomeTo_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


