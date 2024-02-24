#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLCommanderDeathContainerQuest.NLCommanderDeathContainerQuest_C
// (Actor)

class UClass* ANLCommanderDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLCommanderDeathContainerQuest_C");

	return Clss;
}


// NLCommanderDeathContainerQuest_C NLCommanderDeathContainerQuest.Default__NLCommanderDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLCommanderDeathContainerQuest_C* ANLCommanderDeathContainerQuest_C::GetDefaultObj()
{
	static class ANLCommanderDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLCommanderDeathContainerQuest_C*>(ANLCommanderDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


