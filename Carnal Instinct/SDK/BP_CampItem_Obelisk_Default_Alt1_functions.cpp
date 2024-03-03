#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CampItem_Obelisk_Default_Alt1.BP_CampItem_Obelisk_Default_Alt1_C
// (Actor)

class UClass* ABP_CampItem_Obelisk_Default_Alt1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CampItem_Obelisk_Default_Alt1_C");

	return Clss;
}


// BP_CampItem_Obelisk_Default_Alt1_C BP_CampItem_Obelisk_Default_Alt1.Default__BP_CampItem_Obelisk_Default_Alt1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CampItem_Obelisk_Default_Alt1_C* ABP_CampItem_Obelisk_Default_Alt1_C::GetDefaultObj()
{
	static class ABP_CampItem_Obelisk_Default_Alt1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CampItem_Obelisk_Default_Alt1_C*>(ABP_CampItem_Obelisk_Default_Alt1_C::StaticClass()->DefaultObject);

	return Default;
}

}


