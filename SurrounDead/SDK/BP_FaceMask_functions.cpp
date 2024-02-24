#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FaceMask.BP_FaceMask_C
// (Actor)

class UClass* ABP_FaceMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FaceMask_C");

	return Clss;
}


// BP_FaceMask_C BP_FaceMask.Default__BP_FaceMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FaceMask_C* ABP_FaceMask_C::GetDefaultObj()
{
	static class ABP_FaceMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FaceMask_C*>(ABP_FaceMask_C::StaticClass()->DefaultObject);

	return Default;
}

}


