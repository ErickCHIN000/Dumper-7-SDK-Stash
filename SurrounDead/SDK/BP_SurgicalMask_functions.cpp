#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SurgicalMask.BP_SurgicalMask_C
// (Actor)

class UClass* ABP_SurgicalMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SurgicalMask_C");

	return Clss;
}


// BP_SurgicalMask_C BP_SurgicalMask.Default__BP_SurgicalMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SurgicalMask_C* ABP_SurgicalMask_C::GetDefaultObj()
{
	static class ABP_SurgicalMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SurgicalMask_C*>(ABP_SurgicalMask_C::StaticClass()->DefaultObject);

	return Default;
}

}


