#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FilterMask.BP_FilterMask_C
// (Actor)

class UClass* ABP_FilterMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FilterMask_C");

	return Clss;
}


// BP_FilterMask_C BP_FilterMask.Default__BP_FilterMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FilterMask_C* ABP_FilterMask_C::GetDefaultObj()
{
	static class ABP_FilterMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FilterMask_C*>(ABP_FilterMask_C::StaticClass()->DefaultObject);

	return Default;
}

}


