#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HW_VLA_ForAI.LightProjectile_HW_VLA_ForAI_C
// (None)

class UClass* ULightProjectile_HW_VLA_ForAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HW_VLA_ForAI_C");

	return Clss;
}


// LightProjectile_HW_VLA_ForAI_C LightProjectile_HW_VLA_ForAI.Default__LightProjectile_HW_VLA_ForAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HW_VLA_ForAI_C* ULightProjectile_HW_VLA_ForAI_C::GetDefaultObj()
{
	static class ULightProjectile_HW_VLA_ForAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HW_VLA_ForAI_C*>(ULightProjectile_HW_VLA_ForAI_C::StaticClass()->DefaultObject);

	return Default;
}

}


