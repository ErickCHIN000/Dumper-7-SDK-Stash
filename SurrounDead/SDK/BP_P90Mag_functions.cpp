#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P90Mag.BP_P90Mag_C
// (Actor)

class UClass* ABP_P90Mag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P90Mag_C");

	return Clss;
}


// BP_P90Mag_C BP_P90Mag.Default__BP_P90Mag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P90Mag_C* ABP_P90Mag_C::GetDefaultObj()
{
	static class ABP_P90Mag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P90Mag_C*>(ABP_P90Mag_C::StaticClass()->DefaultObject);

	return Default;
}

}


