#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_JAK_SG.LightProjectile_JAK_SG_C
// (None)

class UClass* ULightProjectile_JAK_SG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_JAK_SG_C");

	return Clss;
}


// LightProjectile_JAK_SG_C LightProjectile_JAK_SG.Default__LightProjectile_JAK_SG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_JAK_SG_C* ULightProjectile_JAK_SG_C::GetDefaultObj()
{
	static class ULightProjectile_JAK_SG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_JAK_SG_C*>(ULightProjectile_JAK_SG_C::StaticClass()->DefaultObject);

	return Default;
}

}


