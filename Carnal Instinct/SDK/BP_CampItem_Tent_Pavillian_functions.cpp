#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CampItem_Tent_Pavillian.BP_CampItem_Tent_Pavillian_C
// (Actor)

class UClass* ABP_CampItem_Tent_Pavillian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CampItem_Tent_Pavillian_C");

	return Clss;
}


// BP_CampItem_Tent_Pavillian_C BP_CampItem_Tent_Pavillian.Default__BP_CampItem_Tent_Pavillian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CampItem_Tent_Pavillian_C* ABP_CampItem_Tent_Pavillian_C::GetDefaultObj()
{
	static class ABP_CampItem_Tent_Pavillian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CampItem_Tent_Pavillian_C*>(ABP_CampItem_Tent_Pavillian_C::StaticClass()->DefaultObject);

	return Default;
}

}


