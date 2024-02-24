#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_GroundSlam_Melee.DamageSource_GroundSlam_Melee_C
// (None)

class UClass* UDamageSource_GroundSlam_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_GroundSlam_Melee_C");

	return Clss;
}


// DamageSource_GroundSlam_Melee_C DamageSource_GroundSlam_Melee.Default__DamageSource_GroundSlam_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_GroundSlam_Melee_C* UDamageSource_GroundSlam_Melee_C::GetDefaultObj()
{
	static class UDamageSource_GroundSlam_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_GroundSlam_Melee_C*>(UDamageSource_GroundSlam_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


