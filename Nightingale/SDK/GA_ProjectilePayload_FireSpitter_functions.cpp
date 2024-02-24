#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ProjectilePayload_FireSpitter.GA_ProjectilePayload_FireSpitter_C
// (None)

class UClass* UGA_ProjectilePayload_FireSpitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ProjectilePayload_FireSpitter_C");

	return Clss;
}


// GA_ProjectilePayload_FireSpitter_C GA_ProjectilePayload_FireSpitter.Default__GA_ProjectilePayload_FireSpitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ProjectilePayload_FireSpitter_C* UGA_ProjectilePayload_FireSpitter_C::GetDefaultObj()
{
	static class UGA_ProjectilePayload_FireSpitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ProjectilePayload_FireSpitter_C*>(UGA_ProjectilePayload_FireSpitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


