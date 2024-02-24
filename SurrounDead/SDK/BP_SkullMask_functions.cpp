#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkullMask.BP_SkullMask_C
// (Actor)

class UClass* ABP_SkullMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkullMask_C");

	return Clss;
}


// BP_SkullMask_C BP_SkullMask.Default__BP_SkullMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkullMask_C* ABP_SkullMask_C::GetDefaultObj()
{
	static class ABP_SkullMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkullMask_C*>(ABP_SkullMask_C::StaticClass()->DefaultObject);

	return Default;
}

}


