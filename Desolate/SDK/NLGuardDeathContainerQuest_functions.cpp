#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLGuardDeathContainerQuest.NLGuardDeathContainerQuest_C
// (Actor)

class UClass* ANLGuardDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLGuardDeathContainerQuest_C");

	return Clss;
}


// NLGuardDeathContainerQuest_C NLGuardDeathContainerQuest.Default__NLGuardDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLGuardDeathContainerQuest_C* ANLGuardDeathContainerQuest_C::GetDefaultObj()
{
	static class ANLGuardDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLGuardDeathContainerQuest_C*>(ANLGuardDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


