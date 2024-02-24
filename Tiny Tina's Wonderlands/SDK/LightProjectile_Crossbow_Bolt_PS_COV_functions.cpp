#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Crossbow_Bolt_PS_COV.LightProjectile_Crossbow_Bolt_PS_COV_C
// (None)

class UClass* ULightProjectile_Crossbow_Bolt_PS_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Crossbow_Bolt_PS_COV_C");

	return Clss;
}


// LightProjectile_Crossbow_Bolt_PS_COV_C LightProjectile_Crossbow_Bolt_PS_COV.Default__LightProjectile_Crossbow_Bolt_PS_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Crossbow_Bolt_PS_COV_C* ULightProjectile_Crossbow_Bolt_PS_COV_C::GetDefaultObj()
{
	static class ULightProjectile_Crossbow_Bolt_PS_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Crossbow_Bolt_PS_COV_C*>(ULightProjectile_Crossbow_Bolt_PS_COV_C::StaticClass()->DefaultObject);

	return Default;
}

}


