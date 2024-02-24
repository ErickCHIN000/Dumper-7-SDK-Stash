#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ProjectilePayload_DemonDeer_Bees.GA_ProjectilePayload_DemonDeer_Bees_C
// (None)

class UClass* UGA_ProjectilePayload_DemonDeer_Bees_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ProjectilePayload_DemonDeer_Bees_C");

	return Clss;
}


// GA_ProjectilePayload_DemonDeer_Bees_C GA_ProjectilePayload_DemonDeer_Bees.Default__GA_ProjectilePayload_DemonDeer_Bees_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ProjectilePayload_DemonDeer_Bees_C* UGA_ProjectilePayload_DemonDeer_Bees_C::GetDefaultObj()
{
	static class UGA_ProjectilePayload_DemonDeer_Bees_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ProjectilePayload_DemonDeer_Bees_C*>(UGA_ProjectilePayload_DemonDeer_Bees_C::StaticClass()->DefaultObject);

	return Default;
}

}


