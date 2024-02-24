#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RadiationPills.BP_RadiationPills_C
// (Actor)

class UClass* ABP_RadiationPills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RadiationPills_C");

	return Clss;
}


// BP_RadiationPills_C BP_RadiationPills.Default__BP_RadiationPills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RadiationPills_C* ABP_RadiationPills_C::GetDefaultObj()
{
	static class ABP_RadiationPills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RadiationPills_C*>(ABP_RadiationPills_C::StaticClass()->DefaultObject);

	return Default;
}

}


