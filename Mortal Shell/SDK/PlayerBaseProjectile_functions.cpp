#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerBaseProjectile.PlayerBaseProjectile_C
// (Actor)

class UClass* APlayerBaseProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerBaseProjectile_C");

	return Clss;
}


// PlayerBaseProjectile_C PlayerBaseProjectile.Default__PlayerBaseProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerBaseProjectile_C* APlayerBaseProjectile_C::GetDefaultObj()
{
	static class APlayerBaseProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerBaseProjectile_C*>(APlayerBaseProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


