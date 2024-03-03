#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CampItem_Obelisk_Default.BP_CampItem_Obelisk_Default_C
// (Actor)

class UClass* ABP_CampItem_Obelisk_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CampItem_Obelisk_Default_C");

	return Clss;
}


// BP_CampItem_Obelisk_Default_C BP_CampItem_Obelisk_Default.Default__BP_CampItem_Obelisk_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CampItem_Obelisk_Default_C* ABP_CampItem_Obelisk_Default_C::GetDefaultObj()
{
	static class ABP_CampItem_Obelisk_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CampItem_Obelisk_Default_C*>(ABP_CampItem_Obelisk_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


