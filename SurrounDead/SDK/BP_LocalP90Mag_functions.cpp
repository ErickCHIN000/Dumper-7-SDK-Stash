#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalP90Mag.BP_LocalP90Mag_C
// (Actor)

class UClass* ABP_LocalP90Mag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalP90Mag_C");

	return Clss;
}


// BP_LocalP90Mag_C BP_LocalP90Mag.Default__BP_LocalP90Mag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalP90Mag_C* ABP_LocalP90Mag_C::GetDefaultObj()
{
	static class ABP_LocalP90Mag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalP90Mag_C*>(ABP_LocalP90Mag_C::StaticClass()->DefaultObject);

	return Default;
}

}


