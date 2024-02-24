#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_SWicked_C.LightProjectile_SWicked_C_C
// (None)

class UClass* ULightProjectile_SWicked_C_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_SWicked_C_C");

	return Clss;
}


// LightProjectile_SWicked_C_C LightProjectile_SWicked_C.Default__LightProjectile_SWicked_C_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_SWicked_C_C* ULightProjectile_SWicked_C_C::GetDefaultObj()
{
	static class ULightProjectile_SWicked_C_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_SWicked_C_C*>(ULightProjectile_SWicked_C_C::StaticClass()->DefaultObject);

	return Default;
}

}


