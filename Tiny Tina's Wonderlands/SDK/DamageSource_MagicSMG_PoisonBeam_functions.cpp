#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_MagicSMG_PoisonBeam.DamageSource_MagicSMG_PoisonBeam_C
// (None)

class UClass* UDamageSource_MagicSMG_PoisonBeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_MagicSMG_PoisonBeam_C");

	return Clss;
}


// DamageSource_MagicSMG_PoisonBeam_C DamageSource_MagicSMG_PoisonBeam.Default__DamageSource_MagicSMG_PoisonBeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_MagicSMG_PoisonBeam_C* UDamageSource_MagicSMG_PoisonBeam_C::GetDefaultObj()
{
	static class UDamageSource_MagicSMG_PoisonBeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_MagicSMG_PoisonBeam_C*>(UDamageSource_MagicSMG_PoisonBeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


