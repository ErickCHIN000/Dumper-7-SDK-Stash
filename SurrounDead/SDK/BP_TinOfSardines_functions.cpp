#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TinOfSardines.BP_TinOfSardines_C
// (Actor)

class UClass* ABP_TinOfSardines_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TinOfSardines_C");

	return Clss;
}


// BP_TinOfSardines_C BP_TinOfSardines.Default__BP_TinOfSardines_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TinOfSardines_C* ABP_TinOfSardines_C::GetDefaultObj()
{
	static class ABP_TinOfSardines_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TinOfSardines_C*>(ABP_TinOfSardines_C::StaticClass()->DefaultObject);

	return Default;
}

}


