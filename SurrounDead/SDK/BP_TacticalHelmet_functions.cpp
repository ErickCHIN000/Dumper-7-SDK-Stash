#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TacticalHelmet.BP_TacticalHelmet_C
// (Actor)

class UClass* ABP_TacticalHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TacticalHelmet_C");

	return Clss;
}


// BP_TacticalHelmet_C BP_TacticalHelmet.Default__BP_TacticalHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TacticalHelmet_C* ABP_TacticalHelmet_C::GetDefaultObj()
{
	static class ABP_TacticalHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TacticalHelmet_C*>(ABP_TacticalHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


