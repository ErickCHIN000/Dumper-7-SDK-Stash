#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalMP5Mag.BP_LocalMP5Mag_C
// (Actor)

class UClass* ABP_LocalMP5Mag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalMP5Mag_C");

	return Clss;
}


// BP_LocalMP5Mag_C BP_LocalMP5Mag.Default__BP_LocalMP5Mag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalMP5Mag_C* ABP_LocalMP5Mag_C::GetDefaultObj()
{
	static class ABP_LocalMP5Mag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalMP5Mag_C*>(ABP_LocalMP5Mag_C::StaticClass()->DefaultObject);

	return Default;
}

}


