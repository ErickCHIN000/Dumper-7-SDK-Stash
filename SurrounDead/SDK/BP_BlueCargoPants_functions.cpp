#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlueCargoPants.BP_BlueCargoPants_C
// (Actor)

class UClass* ABP_BlueCargoPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlueCargoPants_C");

	return Clss;
}


// BP_BlueCargoPants_C BP_BlueCargoPants.Default__BP_BlueCargoPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BlueCargoPants_C* ABP_BlueCargoPants_C::GetDefaultObj()
{
	static class ABP_BlueCargoPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BlueCargoPants_C*>(ABP_BlueCargoPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


