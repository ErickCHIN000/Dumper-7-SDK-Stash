#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLOfficerDeathContainerQuest.NLOfficerDeathContainerQuest_C
// (Actor)

class UClass* ANLOfficerDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLOfficerDeathContainerQuest_C");

	return Clss;
}


// NLOfficerDeathContainerQuest_C NLOfficerDeathContainerQuest.Default__NLOfficerDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLOfficerDeathContainerQuest_C* ANLOfficerDeathContainerQuest_C::GetDefaultObj()
{
	static class ANLOfficerDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLOfficerDeathContainerQuest_C*>(ANLOfficerDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


