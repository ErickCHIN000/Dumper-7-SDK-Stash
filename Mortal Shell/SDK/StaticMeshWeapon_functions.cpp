#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StaticMeshWeapon.StaticMeshWeapon_C
// (Actor)

class UClass* AStaticMeshWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaticMeshWeapon_C");

	return Clss;
}


// StaticMeshWeapon_C StaticMeshWeapon.Default__StaticMeshWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStaticMeshWeapon_C* AStaticMeshWeapon_C::GetDefaultObj()
{
	static class AStaticMeshWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStaticMeshWeapon_C*>(AStaticMeshWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


