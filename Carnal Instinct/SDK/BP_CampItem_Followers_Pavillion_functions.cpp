#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CampItem_Followers_Pavillion.BP_CampItem_Followers_Pavillion_C
// (Actor)

class UClass* ABP_CampItem_Followers_Pavillion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CampItem_Followers_Pavillion_C");

	return Clss;
}


// BP_CampItem_Followers_Pavillion_C BP_CampItem_Followers_Pavillion.Default__BP_CampItem_Followers_Pavillion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CampItem_Followers_Pavillion_C* ABP_CampItem_Followers_Pavillion_C::GetDefaultObj()
{
	static class ABP_CampItem_Followers_Pavillion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CampItem_Followers_Pavillion_C*>(ABP_CampItem_Followers_Pavillion_C::StaticClass()->DefaultObject);

	return Default;
}

}


