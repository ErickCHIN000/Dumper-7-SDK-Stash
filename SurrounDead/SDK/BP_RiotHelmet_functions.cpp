#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RiotHelmet.BP_RiotHelmet_C
// (Actor)

class UClass* ABP_RiotHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RiotHelmet_C");

	return Clss;
}


// BP_RiotHelmet_C BP_RiotHelmet.Default__BP_RiotHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RiotHelmet_C* ABP_RiotHelmet_C::GetDefaultObj()
{
	static class ABP_RiotHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RiotHelmet_C*>(ABP_RiotHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


