#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RVT_FoliagePersistant.BP_RVT_FoliagePersistant_C
// (Actor)

class UClass* ABP_RVT_FoliagePersistant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RVT_FoliagePersistant_C");

	return Clss;
}


// BP_RVT_FoliagePersistant_C BP_RVT_FoliagePersistant.Default__BP_RVT_FoliagePersistant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RVT_FoliagePersistant_C* ABP_RVT_FoliagePersistant_C::GetDefaultObj()
{
	static class ABP_RVT_FoliagePersistant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RVT_FoliagePersistant_C*>(ABP_RVT_FoliagePersistant_C::StaticClass()->DefaultObject);

	return Default;
}

}


