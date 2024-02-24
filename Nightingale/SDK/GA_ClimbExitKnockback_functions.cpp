#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ClimbExitKnockback.GA_ClimbExitKnockback_C
// (None)

class UClass* UGA_ClimbExitKnockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ClimbExitKnockback_C");

	return Clss;
}


// GA_ClimbExitKnockback_C GA_ClimbExitKnockback.Default__GA_ClimbExitKnockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ClimbExitKnockback_C* UGA_ClimbExitKnockback_C::GetDefaultObj()
{
	static class UGA_ClimbExitKnockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ClimbExitKnockback_C*>(UGA_ClimbExitKnockback_C::StaticClass()->DefaultObject);

	return Default;
}

}


