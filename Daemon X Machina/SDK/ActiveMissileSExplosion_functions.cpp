#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActiveMissileSExplosion.ActiveMissileSExplosion_C
// (Actor)

class UClass* AActiveMissileSExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveMissileSExplosion_C");

	return Clss;
}


// ActiveMissileSExplosion_C ActiveMissileSExplosion.Default__ActiveMissileSExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AActiveMissileSExplosion_C* AActiveMissileSExplosion_C::GetDefaultObj()
{
	static class AActiveMissileSExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AActiveMissileSExplosion_C*>(AActiveMissileSExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


