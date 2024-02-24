#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shotgun_Turret.BP_Shotgun_Turret_C
// (Actor)

class UClass* ABP_Shotgun_Turret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shotgun_Turret_C");

	return Clss;
}


// BP_Shotgun_Turret_C BP_Shotgun_Turret.Default__BP_Shotgun_Turret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shotgun_Turret_C* ABP_Shotgun_Turret_C::GetDefaultObj()
{
	static class ABP_Shotgun_Turret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shotgun_Turret_C*>(ABP_Shotgun_Turret_C::StaticClass()->DefaultObject);

	return Default;
}

}


