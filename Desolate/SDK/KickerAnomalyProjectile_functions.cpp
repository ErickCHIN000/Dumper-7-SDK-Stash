#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KickerAnomalyProjectile.KickerAnomalyProjectile_C
// (Actor)

class UClass* AKickerAnomalyProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KickerAnomalyProjectile_C");

	return Clss;
}


// KickerAnomalyProjectile_C KickerAnomalyProjectile.Default__KickerAnomalyProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKickerAnomalyProjectile_C* AKickerAnomalyProjectile_C::GetDefaultObj()
{
	static class AKickerAnomalyProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKickerAnomalyProjectile_C*>(AKickerAnomalyProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


