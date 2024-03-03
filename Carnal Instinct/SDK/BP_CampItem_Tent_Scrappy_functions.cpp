#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CampItem_Tent_Scrappy.BP_CampItem_Tent_Scrappy_C
// (Actor)

class UClass* ABP_CampItem_Tent_Scrappy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CampItem_Tent_Scrappy_C");

	return Clss;
}


// BP_CampItem_Tent_Scrappy_C BP_CampItem_Tent_Scrappy.Default__BP_CampItem_Tent_Scrappy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CampItem_Tent_Scrappy_C* ABP_CampItem_Tent_Scrappy_C::GetDefaultObj()
{
	static class ABP_CampItem_Tent_Scrappy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CampItem_Tent_Scrappy_C*>(ABP_CampItem_Tent_Scrappy_C::StaticClass()->DefaultObject);

	return Default;
}

}


