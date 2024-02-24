#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_ThunderAnima.LightProjectile_ThunderAnima_C
// (None)

class UClass* ULightProjectile_ThunderAnima_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_ThunderAnima_C");

	return Clss;
}


// LightProjectile_ThunderAnima_C LightProjectile_ThunderAnima.Default__LightProjectile_ThunderAnima_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_ThunderAnima_C* ULightProjectile_ThunderAnima_C::GetDefaultObj()
{
	static class ULightProjectile_ThunderAnima_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_ThunderAnima_C*>(ULightProjectile_ThunderAnima_C::StaticClass()->DefaultObject);

	return Default;
}

}


