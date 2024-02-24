#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Crossbow_PorSawmill_Ric2.LightProjectile_Crossbow_PorSawmill_Ric2_C
// (None)

class UClass* ULightProjectile_Crossbow_PorSawmill_Ric2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Crossbow_PorSawmill_Ric2_C");

	return Clss;
}


// LightProjectile_Crossbow_PorSawmill_Ric2_C LightProjectile_Crossbow_PorSawmill_Ric2.Default__LightProjectile_Crossbow_PorSawmill_Ric2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Crossbow_PorSawmill_Ric2_C* ULightProjectile_Crossbow_PorSawmill_Ric2_C::GetDefaultObj()
{
	static class ULightProjectile_Crossbow_PorSawmill_Ric2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Crossbow_PorSawmill_Ric2_C*>(ULightProjectile_Crossbow_PorSawmill_Ric2_C::StaticClass()->DefaultObject);

	return Default;
}

}


