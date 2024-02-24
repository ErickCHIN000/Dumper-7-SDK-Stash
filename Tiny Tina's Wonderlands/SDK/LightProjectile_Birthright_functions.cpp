#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Birthright.LightProjectile_Birthright_C
// (None)

class UClass* ULightProjectile_Birthright_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Birthright_C");

	return Clss;
}


// LightProjectile_Birthright_C LightProjectile_Birthright.Default__LightProjectile_Birthright_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Birthright_C* ULightProjectile_Birthright_C::GetDefaultObj()
{
	static class ULightProjectile_Birthright_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Birthright_C*>(ULightProjectile_Birthright_C::StaticClass()->DefaultObject);

	return Default;
}

}


