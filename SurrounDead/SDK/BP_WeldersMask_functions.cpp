#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeldersMask.BP_WeldersMask_C
// (Actor)

class UClass* ABP_WeldersMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeldersMask_C");

	return Clss;
}


// BP_WeldersMask_C BP_WeldersMask.Default__BP_WeldersMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeldersMask_C* ABP_WeldersMask_C::GetDefaultObj()
{
	static class ABP_WeldersMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeldersMask_C*>(ABP_WeldersMask_C::StaticClass()->DefaultObject);

	return Default;
}

}


