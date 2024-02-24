#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThroneRoom_BossDoors.BP_ThroneRoom_BossDoors_C
// (Actor)

class UClass* ABP_ThroneRoom_BossDoors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThroneRoom_BossDoors_C");

	return Clss;
}


// BP_ThroneRoom_BossDoors_C BP_ThroneRoom_BossDoors.Default__BP_ThroneRoom_BossDoors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThroneRoom_BossDoors_C* ABP_ThroneRoom_BossDoors_C::GetDefaultObj()
{
	static class ABP_ThroneRoom_BossDoors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThroneRoom_BossDoors_C*>(ABP_ThroneRoom_BossDoors_C::StaticClass()->DefaultObject);

	return Default;
}

}


