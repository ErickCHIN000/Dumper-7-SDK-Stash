#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FootballHelmet.BP_FootballHelmet_C
// (Actor)

class UClass* ABP_FootballHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FootballHelmet_C");

	return Clss;
}


// BP_FootballHelmet_C BP_FootballHelmet.Default__BP_FootballHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FootballHelmet_C* ABP_FootballHelmet_C::GetDefaultObj()
{
	static class ABP_FootballHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FootballHelmet_C*>(ABP_FootballHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


