#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemTeleportPortal.BP_ItemTeleportPortal_C
// (Actor)

class UClass* ABP_ItemTeleportPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemTeleportPortal_C");

	return Clss;
}


// BP_ItemTeleportPortal_C BP_ItemTeleportPortal.Default__BP_ItemTeleportPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemTeleportPortal_C* ABP_ItemTeleportPortal_C::GetDefaultObj()
{
	static class ABP_ItemTeleportPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemTeleportPortal_C*>(ABP_ItemTeleportPortal_C::StaticClass()->DefaultObject);

	return Default;
}

}


