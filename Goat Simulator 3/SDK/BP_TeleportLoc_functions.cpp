#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TeleportLoc.BP_TeleportLoc_C
// (Actor)

class UClass* ABP_TeleportLoc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TeleportLoc_C");

	return Clss;
}


// BP_TeleportLoc_C BP_TeleportLoc.Default__BP_TeleportLoc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TeleportLoc_C* ABP_TeleportLoc_C::GetDefaultObj()
{
	static class ABP_TeleportLoc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TeleportLoc_C*>(ABP_TeleportLoc_C::StaticClass()->DefaultObject);

	return Default;
}

}


