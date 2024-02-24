#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CookedMeat.BP_CookedMeat_C
// (Actor)

class UClass* ABP_CookedMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CookedMeat_C");

	return Clss;
}


// BP_CookedMeat_C BP_CookedMeat.Default__BP_CookedMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CookedMeat_C* ABP_CookedMeat_C::GetDefaultObj()
{
	static class ABP_CookedMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CookedMeat_C*>(ABP_CookedMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


