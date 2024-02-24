#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OplotOfficerDeathContainerQuest.OplotOfficerDeathContainerQuest_C
// (Actor)

class UClass* AOplotOfficerDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OplotOfficerDeathContainerQuest_C");

	return Clss;
}


// OplotOfficerDeathContainerQuest_C OplotOfficerDeathContainerQuest.Default__OplotOfficerDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOplotOfficerDeathContainerQuest_C* AOplotOfficerDeathContainerQuest_C::GetDefaultObj()
{
	static class AOplotOfficerDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOplotOfficerDeathContainerQuest_C*>(AOplotOfficerDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


