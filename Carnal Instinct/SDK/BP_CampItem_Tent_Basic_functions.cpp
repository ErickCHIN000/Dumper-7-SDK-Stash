#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CampItem_Tent_Basic.BP_CampItem_Tent_Basic_C
// (Actor)

class UClass* ABP_CampItem_Tent_Basic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CampItem_Tent_Basic_C");

	return Clss;
}


// BP_CampItem_Tent_Basic_C BP_CampItem_Tent_Basic.Default__BP_CampItem_Tent_Basic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CampItem_Tent_Basic_C* ABP_CampItem_Tent_Basic_C::GetDefaultObj()
{
	static class ABP_CampItem_Tent_Basic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CampItem_Tent_Basic_C*>(ABP_CampItem_Tent_Basic_C::StaticClass()->DefaultObject);

	return Default;
}

}


