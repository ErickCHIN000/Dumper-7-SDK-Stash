#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReverendDeathContainerQuest.ReverendDeathContainerQuest_C
// (Actor)

class UClass* AReverendDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReverendDeathContainerQuest_C");

	return Clss;
}


// ReverendDeathContainerQuest_C ReverendDeathContainerQuest.Default__ReverendDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AReverendDeathContainerQuest_C* AReverendDeathContainerQuest_C::GetDefaultObj()
{
	static class AReverendDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AReverendDeathContainerQuest_C*>(AReverendDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


