#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Swamp_Slug_Corpse.BP_Swamp_Slug_Corpse_C
// (Actor)

class UClass* ABP_Swamp_Slug_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Swamp_Slug_Corpse_C");

	return Clss;
}


// BP_Swamp_Slug_Corpse_C BP_Swamp_Slug_Corpse.Default__BP_Swamp_Slug_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Swamp_Slug_Corpse_C* ABP_Swamp_Slug_Corpse_C::GetDefaultObj()
{
	static class ABP_Swamp_Slug_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Swamp_Slug_Corpse_C*>(ABP_Swamp_Slug_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}

}


