#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KickImpact.KickImpact_C
// (Actor)

class UClass* AKickImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KickImpact_C");

	return Clss;
}


// KickImpact_C KickImpact.Default__KickImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKickImpact_C* AKickImpact_C::GetDefaultObj()
{
	static class AKickImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKickImpact_C*>(AKickImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


