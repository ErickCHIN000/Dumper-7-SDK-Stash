#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_TOR_Message_Sticky.LightProjectile_TOR_Message_Sticky_C
// (None)

class UClass* ULightProjectile_TOR_Message_Sticky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_TOR_Message_Sticky_C");

	return Clss;
}


// LightProjectile_TOR_Message_Sticky_C LightProjectile_TOR_Message_Sticky.Default__LightProjectile_TOR_Message_Sticky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_TOR_Message_Sticky_C* ULightProjectile_TOR_Message_Sticky_C::GetDefaultObj()
{
	static class ULightProjectile_TOR_Message_Sticky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_TOR_Message_Sticky_C*>(ULightProjectile_TOR_Message_Sticky_C::StaticClass()->DefaultObject);

	return Default;
}

}


