#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GasFlyer_Projectile.BP_GasFlyer_Projectile_C
// (Actor)

class UClass* ABP_GasFlyer_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GasFlyer_Projectile_C");

	return Clss;
}


// BP_GasFlyer_Projectile_C BP_GasFlyer_Projectile.Default__BP_GasFlyer_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GasFlyer_Projectile_C* ABP_GasFlyer_Projectile_C::GetDefaultObj()
{
	static class ABP_GasFlyer_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GasFlyer_Projectile_C*>(ABP_GasFlyer_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


