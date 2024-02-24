#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindMan_TeleportationExitPoint.BlindMan_TeleportationExitPoint_C
// (Actor)

class UClass* ABlindMan_TeleportationExitPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindMan_TeleportationExitPoint_C");

	return Clss;
}


// BlindMan_TeleportationExitPoint_C BlindMan_TeleportationExitPoint.Default__BlindMan_TeleportationExitPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindMan_TeleportationExitPoint_C* ABlindMan_TeleportationExitPoint_C::GetDefaultObj()
{
	static class ABlindMan_TeleportationExitPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindMan_TeleportationExitPoint_C*>(ABlindMan_TeleportationExitPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


