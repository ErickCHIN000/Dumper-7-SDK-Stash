#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C
// (Actor)

class UClass* ABP_GrenadeLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GrenadeLauncher_C");

	return Clss;
}


// BP_GrenadeLauncher_C BP_GrenadeLauncher.Default__BP_GrenadeLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GrenadeLauncher_C* ABP_GrenadeLauncher_C::GetDefaultObj()
{
	static class ABP_GrenadeLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GrenadeLauncher_C*>(ABP_GrenadeLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


