#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerBaseProjectile_Box.PlayerBaseProjectile_Box_C
// (Actor)

class UClass* APlayerBaseProjectile_Box_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerBaseProjectile_Box_C");

	return Clss;
}


// PlayerBaseProjectile_Box_C PlayerBaseProjectile_Box.Default__PlayerBaseProjectile_Box_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerBaseProjectile_Box_C* APlayerBaseProjectile_Box_C::GetDefaultObj()
{
	static class APlayerBaseProjectile_Box_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerBaseProjectile_Box_C*>(APlayerBaseProjectile_Box_C::StaticClass()->DefaultObject);

	return Default;
}

}


