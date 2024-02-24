#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TurretGun.BP_TurretGun_C
// (Actor)

class UClass* ABP_TurretGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TurretGun_C");

	return Clss;
}


// BP_TurretGun_C BP_TurretGun.Default__BP_TurretGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TurretGun_C* ABP_TurretGun_C::GetDefaultObj()
{
	static class ABP_TurretGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TurretGun_C*>(ABP_TurretGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


