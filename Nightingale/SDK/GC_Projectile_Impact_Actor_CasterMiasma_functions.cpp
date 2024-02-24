#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Projectile_Impact_Actor_CasterMiasma.GC_Projectile_Impact_Actor_CasterMiasma_C
// (Actor)

class UClass* AGC_Projectile_Impact_Actor_CasterMiasma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Projectile_Impact_Actor_CasterMiasma_C");

	return Clss;
}


// GC_Projectile_Impact_Actor_CasterMiasma_C GC_Projectile_Impact_Actor_CasterMiasma.Default__GC_Projectile_Impact_Actor_CasterMiasma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Projectile_Impact_Actor_CasterMiasma_C* AGC_Projectile_Impact_Actor_CasterMiasma_C::GetDefaultObj()
{
	static class AGC_Projectile_Impact_Actor_CasterMiasma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Projectile_Impact_Actor_CasterMiasma_C*>(AGC_Projectile_Impact_Actor_CasterMiasma_C::StaticClass()->DefaultObject);

	return Default;
}

}


