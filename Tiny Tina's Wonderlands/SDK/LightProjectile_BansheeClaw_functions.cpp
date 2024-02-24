#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_BansheeClaw.LightProjectile_BansheeClaw_C
// (None)

class UClass* ULightProjectile_BansheeClaw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_BansheeClaw_C");

	return Clss;
}


// LightProjectile_BansheeClaw_C LightProjectile_BansheeClaw.Default__LightProjectile_BansheeClaw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_BansheeClaw_C* ULightProjectile_BansheeClaw_C::GetDefaultObj()
{
	static class ULightProjectile_BansheeClaw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_BansheeClaw_C*>(ULightProjectile_BansheeClaw_C::StaticClass()->DefaultObject);

	return Default;
}

}


