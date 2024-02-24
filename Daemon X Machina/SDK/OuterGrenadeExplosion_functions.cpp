#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterGrenadeExplosion.OuterGrenadeExplosion_C
// (Actor)

class UClass* AOuterGrenadeExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterGrenadeExplosion_C");

	return Clss;
}


// OuterGrenadeExplosion_C OuterGrenadeExplosion.Default__OuterGrenadeExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterGrenadeExplosion_C* AOuterGrenadeExplosion_C::GetDefaultObj()
{
	static class AOuterGrenadeExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterGrenadeExplosion_C*>(AOuterGrenadeExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


