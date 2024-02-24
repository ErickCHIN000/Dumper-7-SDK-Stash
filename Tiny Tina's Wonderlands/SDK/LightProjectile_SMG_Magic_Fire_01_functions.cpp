#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_SMG_Magic_Fire_01.LightProjectile_SMG_Magic_Fire_01_C
// (None)

class UClass* ULightProjectile_SMG_Magic_Fire_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_SMG_Magic_Fire_01_C");

	return Clss;
}


// LightProjectile_SMG_Magic_Fire_01_C LightProjectile_SMG_Magic_Fire_01.Default__LightProjectile_SMG_Magic_Fire_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_SMG_Magic_Fire_01_C* ULightProjectile_SMG_Magic_Fire_01_C::GetDefaultObj()
{
	static class ULightProjectile_SMG_Magic_Fire_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_SMG_Magic_Fire_01_C*>(ULightProjectile_SMG_Magic_Fire_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


