#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGPlayerCamera.BP_GGPlayerCamera_C
// (Actor)

class UClass* ABP_GGPlayerCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGPlayerCamera_C");

	return Clss;
}


// BP_GGPlayerCamera_C BP_GGPlayerCamera.Default__BP_GGPlayerCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGPlayerCamera_C* ABP_GGPlayerCamera_C::GetDefaultObj()
{
	static class ABP_GGPlayerCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGPlayerCamera_C*>(ABP_GGPlayerCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


