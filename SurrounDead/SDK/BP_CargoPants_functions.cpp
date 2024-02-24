#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CargoPants.BP_CargoPants_C
// (Actor)

class UClass* ABP_CargoPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CargoPants_C");

	return Clss;
}


// BP_CargoPants_C BP_CargoPants.Default__BP_CargoPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CargoPants_C* ABP_CargoPants_C::GetDefaultObj()
{
	static class ABP_CargoPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CargoPants_C*>(ABP_CargoPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


