#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CookedLargeFish.BP_CookedLargeFish_C
// (Actor)

class UClass* ABP_CookedLargeFish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CookedLargeFish_C");

	return Clss;
}


// BP_CookedLargeFish_C BP_CookedLargeFish.Default__BP_CookedLargeFish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CookedLargeFish_C* ABP_CookedLargeFish_C::GetDefaultObj()
{
	static class ABP_CookedLargeFish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CookedLargeFish_C*>(ABP_CookedLargeFish_C::StaticClass()->DefaultObject);

	return Default;
}

}


