#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PoliceBoots.BP_PoliceBoots_C
// (Actor)

class UClass* ABP_PoliceBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PoliceBoots_C");

	return Clss;
}


// BP_PoliceBoots_C BP_PoliceBoots.Default__BP_PoliceBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PoliceBoots_C* ABP_PoliceBoots_C::GetDefaultObj()
{
	static class ABP_PoliceBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PoliceBoots_C*>(ABP_PoliceBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


