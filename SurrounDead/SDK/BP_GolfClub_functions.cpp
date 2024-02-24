#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GolfClub.BP_GolfClub_C
// (Actor)

class UClass* ABP_GolfClub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GolfClub_C");

	return Clss;
}


// BP_GolfClub_C BP_GolfClub.Default__BP_GolfClub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GolfClub_C* ABP_GolfClub_C::GetDefaultObj()
{
	static class ABP_GolfClub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GolfClub_C*>(ABP_GolfClub_C::StaticClass()->DefaultObject);

	return Default;
}

}


