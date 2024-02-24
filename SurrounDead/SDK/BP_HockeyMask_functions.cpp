#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HockeyMask.BP_HockeyMask_C
// (Actor)

class UClass* ABP_HockeyMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HockeyMask_C");

	return Clss;
}


// BP_HockeyMask_C BP_HockeyMask.Default__BP_HockeyMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HockeyMask_C* ABP_HockeyMask_C::GetDefaultObj()
{
	static class ABP_HockeyMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HockeyMask_C*>(ABP_HockeyMask_C::StaticClass()->DefaultObject);

	return Default;
}

}


