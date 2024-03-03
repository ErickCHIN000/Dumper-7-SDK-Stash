#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Profile_NearbyBounds.BP_Profile_NearbyBounds_C
// (Actor)

class UClass* ABP_Profile_NearbyBounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Profile_NearbyBounds_C");

	return Clss;
}


// BP_Profile_NearbyBounds_C BP_Profile_NearbyBounds.Default__BP_Profile_NearbyBounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Profile_NearbyBounds_C* ABP_Profile_NearbyBounds_C::GetDefaultObj()
{
	static class ABP_Profile_NearbyBounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Profile_NearbyBounds_C*>(ABP_Profile_NearbyBounds_C::StaticClass()->DefaultObject);

	return Default;
}

}


