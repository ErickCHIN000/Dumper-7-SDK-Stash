#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneBase.BP_ZoneBase_C
// (Actor)

class UClass* ABP_ZoneBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneBase_C");

	return Clss;
}


// BP_ZoneBase_C BP_ZoneBase.Default__BP_ZoneBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZoneBase_C* ABP_ZoneBase_C::GetDefaultObj()
{
	static class ABP_ZoneBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZoneBase_C*>(ABP_ZoneBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


