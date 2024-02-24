#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MushroomsFieldProjectile.MushroomsFieldProjectile_C
// (Actor)

class UClass* AMushroomsFieldProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MushroomsFieldProjectile_C");

	return Clss;
}


// MushroomsFieldProjectile_C MushroomsFieldProjectile.Default__MushroomsFieldProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMushroomsFieldProjectile_C* AMushroomsFieldProjectile_C::GetDefaultObj()
{
	static class AMushroomsFieldProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMushroomsFieldProjectile_C*>(AMushroomsFieldProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


