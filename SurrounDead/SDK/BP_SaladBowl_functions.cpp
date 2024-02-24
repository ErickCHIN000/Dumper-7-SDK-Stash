#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SaladBowl.BP_SaladBowl_C
// (Actor)

class UClass* ABP_SaladBowl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SaladBowl_C");

	return Clss;
}


// BP_SaladBowl_C BP_SaladBowl.Default__BP_SaladBowl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SaladBowl_C* ABP_SaladBowl_C::GetDefaultObj()
{
	static class ABP_SaladBowl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SaladBowl_C*>(ABP_SaladBowl_C::StaticClass()->DefaultObject);

	return Default;
}

}


